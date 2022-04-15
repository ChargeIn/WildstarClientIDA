#include "../winhttp.h"

//----- (0000000140886650) ----------------------------------------------------
__int64 __fastcall sub_140886650(
	__int64 a1,
	__int64 a2,
	unsigned int a3,
	unsigned __int64 a4,
	unsigned int a5,
	unsigned int a6,
	char a7,
	char a8,
	unsigned int* a9,
	_QWORD* a10)
{
	__int64 v11; // rbx
	unsigned int* v14; // r13
	int v15; // eax
	__int64 v16; // rdx
	int v17; // ebp
	__int64 v18; // rdx
	unsigned int v19; // r11d
	int v20; // r10d
	__int64 v21; // r9
	_QWORD* v22; // rax
	__int64 v24; // [rsp+80h] [rbp+8h] BYREF
	__int64 v25; // [rsp+88h] [rbp+10h]

	v25 = a2;
	v11 = 0i64;
	*a10 = 0i64;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v14 = a9;
	v24 = 0i64;
	if (!*(_BYTE*)(a1 + 248) || a3 == -1)
	{
		v17 = 0;
		goto LABEL_8;
	}
	v15 = sub_1408896B0(a1 + 168, a3, a4, a5, a6, a7, a9, &v24);
	v16 = v24;
	v17 = v15;
	if (!v24)
	{
	LABEL_8:
		if (a8)
			goto LABEL_15;
		sub_140889870(a1 + 168, &v24);
		v18 = v24;
		if (!v24)
		{
			sub_1408893E0(a1);
			goto LABEL_15;
		}
		v19 = *v14;
		v20 = *(_DWORD*)(a1 + 264);
		v21 = (unsigned int)(*(_DWORD*)(v25 + 112) * *(_DWORD*)(*(_QWORD*)(v25 + 40) + 8i64));
		*(_QWORD*)(a1 + 312) = *(_QWORD*)(v24 + 8);
		v22 = a10;
		*(_QWORD*)(a1 + 296) = a4 + v21;
		*(_DWORD*)(a1 + 304) = v20;
		*(_DWORD*)(a1 + 308) = v19;
		*v22 = a1 + 296;
		sub_140889C10(a1 + 168, v18, a1 + 296, a3, a4, *v14);
		v16 = v24;
		goto LABEL_11;
	}
	if (a8 && *(_QWORD*)(v24 + 16))
	{
		sub_140889B30(a1 + 168, v24);
		goto LABEL_15;
	}
LABEL_11:
	v11 = *(_QWORD*)(a1 + 280);
	if (v11)
		*(_QWORD*)(a1 + 280) = *(_QWORD*)v11;
	*(_DWORD*)(v11 + 20) &= 0xFFFFFFF8;
	*(_QWORD*)(v11 + 8) = v16;
	*(_DWORD*)(v11 + 16) = v17;
LABEL_15:
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	return v11;
}

