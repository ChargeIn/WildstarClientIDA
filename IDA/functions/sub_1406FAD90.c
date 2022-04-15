//----- (00000001406FAD90) ----------------------------------------------------
__int64 __fastcall sub_1406FAD90(__int64 a1)
{
	__int64* v1; // rdx
	int v3; // eax
	unsigned int v4; // edx
	float v5; // xmm0_4
	__int64 v6; // rax
	__int64 v8; // [rsp+20h] [rbp-18h] BYREF
	int v9; // [rsp+28h] [rbp-10h]
	__int64 v10; // [rsp+40h] [rbp+8h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v3 = *((_DWORD*)v1 + 2);
	if (v3 != 3)
	{
		if (v3 != 4 || !sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v10))
		{
			v4 = 0;
			goto LABEL_8;
		}
		v9 = 3;
		v1 = &v8;
		v8 = v10;
	}
	v4 = (int)*(double*)v1;
LABEL_8:
	v5 = COERCE_FLOAT(sub_1403C0340(a1, v4));
	v6 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 1406FADEB: variable 'a1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

