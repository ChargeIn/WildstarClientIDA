//----- (00000001400DAA30) ----------------------------------------------------
__int64 __fastcall sub_1400DAA30(_QWORD* a1)
{
	int v1; // edi
	int v3; // esi
	__int64 result; // rax
	_QWORD* v5; // r14
	char* v6; // rax
	__int64 v7; // rbp
	_DWORD* v8; // rcx
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	v1 = 0;
	v3 = 0;
	result = sub_1400D66A0(a1, 1u);
	v5 = (_QWORD*)result;
	if (result)
	{
		v6 = (char*)sub_140056BB0(a1, 2u, 0i64);
		sub_14018F2D0(&v9, v6);
		v7 = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v5 + 448i64))(v5, v10);
		if (v10)
			sub_14018B900(v10, 0);
		if (v7)
			LOBYTE(v3) = (v7 & v5[82]) != 0;
		v8 = (_DWORD*)a1[2];
		LOBYTE(v1) = v3 != 0;
		v8[2] = 1;
		result = 1i64;
		*v8 = v1;
		a1[2] += 16i64;
	}
	return result;
}

