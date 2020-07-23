// Profiler.h
//#define DEBUG_PINS

#define DEBUG_INTERRUPT_TIME 10
#define DEBUG_LOOP_TIME 11

//#define digitalWrite digitalWriteFast

#ifdef DEBUG_PINS
  #define initDebugPin(debugpin) pinMode(debugpin, OUTPUT);   digitalWriteFast(debugpin, LOW)
  #define beginDebugEvent( debugpin ) digitalWriteFast( debugpin, HIGH)
  #define endDebugEvent( debugpin ) digitalWriteFast(debugpin, LOW)
  #define markDebugEvent( debugpin) digitalWriteFast(debugpin, HIGH); digitalWriteFast(debugpin, LOW)
#else
  #define initDebugPin(debugpin)
  #define beginDebugEvent( debugpin )
  #define endDebugEvent( debugpin )
  #define markDebugEvent(debugpin)
#endif
