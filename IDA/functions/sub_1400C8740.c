#include "../winhttp.h"

//----- (00000001400C8740) ----------------------------------------------------
__int64 __fastcall sub_1400C8740(unsigned __int64 a1, __int64 a2)
{
	_QWORD* v5; // rax
	_QWORD* v6; // rbx
	unsigned int v7; // edi
	int v8; // eax
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rbx
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx

	if ((*(_BYTE*)(a1 + 28) & 1) == 0 || !sub_140134260(a2, a1))
		return 0i64;
	v5 = *(_QWORD**)(a1 + 560);
	v6 = (_QWORD*)*v5;
	v7 = 1024;
	if ((_QWORD*)*v5 != v5)
	{
		do
		{
			v8 = sub_1400C8740(v6[2], a2);
			v6 = (_QWORD*)*v6;
			v7 += v8;
		} while (v6 != *(_QWORD**)(a1 + 560));
	}
	v9 = *(_QWORD*)(a1 + 680);
	if (v9)
	{
		v10 = *(_QWORD*)(v9 + 24);
		if (v10)
			v7 += sub_1400C8740(v10, a2);
		v11 = *(_QWORD*)(*(_QWORD*)(a1 + 680) + 32i64);
		if (v11)
			v7 += sub_1400C8740(v11, a2);
	}
	if ((*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)(a1 + 816) + 8i64))(a1 + 816))
	{
		v12 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 400i64);
		v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 832) + 32i64) + 160i64), *(_DWORD*)(a1 + 824));
		v15 = *(_QWORD*)(v14 + 16);
		*(_QWORD*)v15 = *v13;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
		*(_QWORD*)(v14 + 16) += 16i64;
		v7 += sub_1401342E0(a2, v12, -1, 0);
		*(_QWORD*)(v12 + 16) -= 16i64;
	}
	return v7;
}
// 1400C881C: variable 'v14' is possibly undefined

