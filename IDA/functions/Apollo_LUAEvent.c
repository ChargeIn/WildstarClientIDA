#include "../winhttp.h"

//----- (00000001400EA3E0 sub_1400EA3E0) ----------------------------------------------------
__int64 Apollo_LUAEvent(__int64 LuaState, _BYTE* a2, _BYTE* a3, ...)
{
	va_list va; // [rsp+48h] [rbp+20h] BYREF

	va_start(va, a3);
	return sub_1400EA400(LuaState, a2, a3, (__int64)va);
}

