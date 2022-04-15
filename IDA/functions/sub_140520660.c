//----- (0000000140520660) ----------------------------------------------------
__int64 __fastcall sub_140520660(__int64 a1, __int64 a2)
{
	__int64* v2; // r8
	int v5; // edi
	int v6; // eax
	unsigned int v7; // edx
	int v8; // eax
	_DWORD* v9; // rcx
	__int64 result; // rax
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]
	__int64 v13; // [rsp+40h] [rbp+8h] BYREF

	v2 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(a2 + 24) + 32i64) < *(_QWORD*)(a2 + 16))
		v2 = (__int64*)(*(_QWORD*)(a2 + 24) + 32i64);
	v5 = 0;
	v6 = *((_DWORD*)v2 + 2);
	if (v6 != 3)
	{
		if (v6 != 4 || !sub_14005AC80((char*)(*v2 + 32), (unsigned __int64*)&v13))
		{
			v7 = 0;
			goto LABEL_8;
		}
		v12 = 3;
		v2 = &v11;
		v11 = v13;
	}
	v7 = (int)*(double*)v2;
LABEL_8:
	*(_DWORD*)(a1 + 16) = v7;
	v8 = sub_1404ADFE0(a1, v7);
	v9 = *(_DWORD**)(a2 + 16);
	v9[2] = 1;
	LOBYTE(v5) = v8 != 0;
	result = 1i64;
	*v9 = v5;
	*(_QWORD*)(a2 + 16) += 16i64;
	return result;
}
// 1405206D2: variable 'a1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

