//----- (0000000140668ED0) ----------------------------------------------------
__int64 __fastcall sub_140668ED0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	__int64* v4; // rcx
	int v5; // edi
	int v6; // eax
	unsigned int v7; // edx
	unsigned __int64 v8; // r8
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rcx
	int v12; // eax
	_DWORD* v13; // rcx
	bool v14; // zf
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]
	__int64 v17; // [rsp+48h] [rbp+10h] BYREF

	result = sub_140056AB0(a1, 1u);
	v3 = result;
	if (!result)
		return result;
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (__int64*)(a1[3] + 16i64);
	v5 = 0;
	v6 = *((_DWORD*)v4 + 2);
	if (v6 != 3)
	{
		if (v6 != 4 || !sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v17))
		{
			v7 = 0;
			goto LABEL_9;
		}
		v16 = 3;
		v4 = &v15;
		v15 = v17;
	}
	v7 = (int)*(double*)v4;
LABEL_9:
	v8 = *(_QWORD*)(*(_QWORD*)v3 + 96i64);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < v7)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v17 = v9, v7 < *(_DWORD*)(v9 + 32)))
		v17 = v8;
	if (v17 == v8 || (v11 = *(_QWORD*)(v17 + 40)) == 0 || (v12 = 1, (*(_BYTE*)(v11 + 16) & 1) == 0))
		v12 = 0;
	v13 = (_DWORD*)a1[2];
	v14 = v12 == 0;
	result = 1i64;
	LOBYTE(v5) = !v14;
	v13[2] = 1;
	*v13 = v5;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

