//----- (0000000140521D80) ----------------------------------------------------
__int64 __fastcall sub_140521D80(__int64 a1, __int64 a2)
{
	__int64* v2; // r8
	int v4; // eax
	__int64 v6; // [rsp+20h] [rbp-18h] BYREF
	int v7; // [rsp+28h] [rbp-10h]
	__int64 v8; // [rsp+40h] [rbp+8h] BYREF

	v2 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(a2 + 24) + 32i64) < *(_QWORD*)(a2 + 16))
		v2 = (__int64*)(*(_QWORD*)(a2 + 24) + 32i64);
	v4 = *((_DWORD*)v2 + 2);
	if (v4 == 3)
		goto LABEL_7;
	if (v4 == 4 && sub_14005AC80((char*)(*v2 + 32), (unsigned __int64*)&v8))
	{
		v7 = 3;
		v2 = &v6;
		v6 = v8;
	LABEL_7:
		*(_DWORD*)(a1 + 16) = (int)*(double*)v2;
		return 0i64;
	}
	*(_DWORD*)(a1 + 16) = 0;
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

