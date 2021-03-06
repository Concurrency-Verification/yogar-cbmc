# Build platform (use one of AUTO, Unix, OSX_Universal, MSVC, Cygwin, MinGW)
BUILD_ENV = Unix

# Variables you may want to override
#CXXFLAGS = -Wall -O0 -g -Werror -Wno-long-long -Wno-sign-compare -Wno-parentheses -Wno-strict-aliasing -pedantic
#CXXFLAGS = -std=c++11

# If GLPK is available; this is used by goto-instrument.
#LIB_GLPK = -lglpk 

# SAT-solvers we have
#PRECOSAT = ../../precosat-576-7e5e66f-120112
#PICOSAT = ../../picosat-959
#LINGELING = ../../lingeling-587f-4882048-110513
#CHAFF = ../../zChaff
#BOOLEFORCE = ../../booleforce-0.4
#MINISAT = ../../MiniSat-p_v1.14
MINISAT2 = ../../minisat-2.2.0
#GLUCOSE = ../../glucose2.2
#SMVSAT =

# Signing identity for MacOS Gatekeeper

OSX_IDENTITY="3rd Party Mac Developer Application: Daniel Kroening"
CBMC_VERSION=4.9
