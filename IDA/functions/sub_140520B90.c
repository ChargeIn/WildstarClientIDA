//----- (0000000140520B90) ----------------------------------------------------
__int64 __fastcall sub_140520B90(__int64 a1, __int64 a2)
{
	__int64* v2; // r8
	int v4; // eax
	int v5; // edx
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF

	v2 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(a2 + 24) + 32i64) < *(_QWORD*)(a2 + 16))
		v2 = (__int64*)(*(_QWORD*)(a2 + 24) + 32i64);
	v4 = *((_DWORD*)v2 + 2);
	if (v4 != 3)
	{
		if (v4 != 4 || !sub_14005AC80((char*)(*v2 + 32), (unsigned __int64*)&v9))
		{
			v5 = 0;
			goto LABEL_8;
		}
		v8 = 3;
		v2 = &v7;
		v7 = v9;
	}
	v5 = (int)*(double*)v2;
LABEL_8:
	*(_DWORD*)(a1 + 16) = v5;
	*(_DWORD*)(a1 + 20) = sub_1405A4D90(a1, v5);
	return 1i64;
}
// 140520BF4: variable 'a1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

