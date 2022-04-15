#include "../winhttp.h"

//----- (000000014034B140) ----------------------------------------------------
__int64 __fastcall sub_14034B140(__int64 a1, unsigned __int64* a2, __int64 a3, __int64 a4, __int64 a5)
{
	_DWORD* StackBase; // rdi
	int v8; // esi
	unsigned __int64 v9; // rbx
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rdx
	bool v13; // sf
	__int64 result; // rax

	StackBase = NtCurrentTeb()->NtTib.StackBase;
	v8 = *(StackBase - 1);
	*(StackBase - 1) = 1;
	if (!a4)
		goto LABEL_10;
	v9 = a2[2];
	if (!v9)
		goto LABEL_10;
	v10 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v9 + 48i64))(a2[2]);
	if (*(_QWORD*)a5 != v10)
	{
		if ((*(int(__fastcall**)(unsigned __int64))(*(_QWORD*)v9 + 56i64))(v9) < 0)
			goto LABEL_10;
		v10 = (*(__int64(__fastcall**)(unsigned __int64))(*(_QWORD*)v9 + 48i64))(v9);
	}
	v11 = *(unsigned int*)(a5 + 12);
	v12 = *a2;
	if (v11 + v10 <= *a2)
		goto LABEL_9;
	if (v10 >= v12)
	{
	LABEL_10:
		result = 2i64;
		goto LABEL_11;
	}
	v11 = v12 - v10;
LABEL_9:
	v13 = (*(int(__fastcall**)(unsigned __int64, __int64, unsigned __int64))(*(_QWORD*)v9 + 64i64))(v9, a4, v11) < 0;
	result = 1i64;
	if (v13)
		goto LABEL_10;
LABEL_11:
	*(StackBase - 1) = v8;
	return result;
}

