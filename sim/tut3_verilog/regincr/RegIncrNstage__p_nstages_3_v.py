
#=========================================================================
# VRegIncrNstage__p_nstages_3_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import copy
import os
import gc
import weakref

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff
from pymtl3.passes.backends.verilog import *

#-------------------------------------------------------------------------
# RegIncrNstage__p_nstages_3
#-------------------------------------------------------------------------

class RegIncrNstage__p_nstages_3( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        uint8_t * clk;        
        uint8_t * in_;        
        uint8_t * out;        
        uint8_t * reset;

        // Verilator model
        void * _cffi_model;

        // Verilator simulation context
        void * _cffi_context_ptr;

        // VCD state
        int _cffi_vcd_en;

        // VCD tracing helpers
        void *       _cffi_tfp;
        unsigned int _cffi_trace_time;

        // Verilog line trace buffer
        char _cffi_line_trace_str[512];

      } VRegIncrNstage__p_nstages_3_t;

      VRegIncrNstage__p_nstages_3_t * VRegIncrNstage__p_nstages_3_create_model( const char * );
      void VRegIncrNstage__p_nstages_3_destroy_model( VRegIncrNstage__p_nstages_3_t *);
      void VRegIncrNstage__p_nstages_3_comb_eval( VRegIncrNstage__p_nstages_3_t * );
      void VRegIncrNstage__p_nstages_3_seq_eval( VRegIncrNstage__p_nstages_3_t * );
      void VRegIncrNstage__p_nstages_3_assert_on( VRegIncrNstage__p_nstages_3_t *, bool );
      bool VRegIncrNstage__p_nstages_3_has_assert_fired( VRegIncrNstage__p_nstages_3_t * );
      

    """)

    # Print the modification time stamp of the shared lib
    # print('Modification time of {}: {}'.format(
    #       'libRegIncrNstage__p_nstages_3_v.so', os.path.getmtime( './libRegIncrNstage__p_nstages_3_v.so' ) ))

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    # NOTE: the RTLD_NODELETE flag is necessary in this dlopen() to make sure
    # all loaded shared libraries stick to the current processes (i.e., cannot
    # be unloaded) until the exit of the main process. This behavior is necessary
    # to avoid segfaults at exits due to destruction of thread-local variables,
    # which are heavily used in Verilator's runtime library.
    s._ffi_inst = s.ffi.dlopen('./libRegIncrNstage__p_nstages_3_v.so', s.ffi.RTLD_NODELETE | s.ffi.RTLD_NOW)

    # increment instance count
    RegIncrNstage__p_nstages_3.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    # print(f"In finalize() method of an instance of {str(s.__class__)}")
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1

    # Clean up python side FFI references
    s._convert_string = None

    s._ffi_inst.VRegIncrNstage__p_nstages_3_destroy_model( s._ffi_m )
    # print("End of finalize()")

  def __del__( s ):
    # print(f"In __del__() method of an instance of {str(s.__class__)}")
    if s._finalization_count == 0:
      s._finalization_count += 1

      # Clean up python side FFI references
      s._convert_string = None

      s._ffi_inst.VRegIncrNstage__p_nstages_3_destroy_model( s._ffi_m )
    # print("End of __del__")

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if int(s._ip_cfg.vl_trace):
      if bool(s._ip_cfg.vl_trace_filename):
        verilator_vcd_file = f"{s._ip_cfg.vl_trace_filename}.verilator1.vcd"
      else:
        verilator_vcd_file = "RegIncrNstage__p_nstages_3.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    # PP: we need to keep the new'ed object alive by assigning it to
    # a variable. See more about this:
    # https://cffi.readthedocs.io/en/stable/ref.html#ffi-new
    ffi_vl_vcd_file = s.ffi.new("char[]", verilator_vcd_file)
    s._ffi_m = s._ffi_inst.VRegIncrNstage__p_nstages_3_create_model( ffi_vl_vcd_file )

    # Buffer for line tracing
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.VRegIncrNstage__p_nstages_3_comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.VRegIncrNstage__p_nstages_3_seq_eval

    # declare the port interface
    s.in_ = InPort( Bits8 )
    s.out = OutPort( Bits8 )

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_in_ = Wire( Bits8 )
    @update
    def isignal_s_DOT_in_():
      s.s_DOT_in_ @= s.in_
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_out = Wire( Bits8 )
    @update
    def osignal_s_DOT_out():
      s.out @= s.s_DOT_out

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.in_[0] = int(s.s_DOT_in_)
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      s.s_DOT_out @= _ffi_m.out[0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

      if s._ffi_inst.VRegIncrNstage__p_nstages_3_has_assert_fired( _ffi_m ):
        raise AssertionError("A Verilog assertion fired in the Verilator simulation!")

  def assert_on( s, enable ):
    assert isinstance( enable, bool )
    s._ffi_inst.VRegIncrNstage__p_nstages_3_assert_on( s._ffi_m, enable )

  def line_trace( s ):
    if 0:
      s._ffi_inst.VRegIncrNstage__p_nstages_3_line_trace( s._ffi_m, s._ffi_m._cffi_line_trace_str )
      return s._convert_string( s._ffi_m._cffi_line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, in_={s.in_}, out={s.out}, reset={s.reset},'

  def internal_line_trace( s ):
    return ''
