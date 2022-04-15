#include "../winhttp.h"

//----- (000000014002EA60) ----------------------------------------------------
__int64 __fastcall sub_14002EA60(__int64 a1)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 4856) = -1;
	*(_DWORD*)(a1 + 4864) = 23;
	*(_QWORD*)(a1 + 4848) = 0i64;
	*(_DWORD*)(a1 + 4860) = 0;
	sub_140031E80(a1 + 4696);
	result = *(_QWORD*)(a1 + 4824);
	*(_QWORD*)(a1 + 4832) += -8 * ((*(_QWORD*)(a1 + 4832) - result) >> 3);
	return result;
}

