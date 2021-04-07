#ifndef WRAP_ORBIT_MPI_DATATYPE_H
#define WRAP_ORBIT_MPI_DATATYPE_H

///////////////////////////////////////////////////////////////////////////
//
// This is a wrapper for the MPI_Datatype data type from MPI
//
///////////////////////////////////////////////////////////////////////////
#include "orbit_mpi.hh"

#ifdef __cplusplus
extern "C" {
#endif

  namespace wrap_orbit_mpi_datatype{
    void init_orbit_mpi_datatype(PyObject* module);
  }

#ifdef __cplusplus
}
#endif

///////////////////////////////////////////////////////////////////////////
//
// END OF FILE
//
///////////////////////////////////////////////////////////////////////////

#endif
