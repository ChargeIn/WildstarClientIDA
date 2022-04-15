//----- (0000000140664FB0) ----------------------------------------------------
__int64 __fastcall sub_140664FB0(_QWORD* a1)
{
	__int64* v2; // rdi
	__int64* v3; // rcx
	int v4; // eax
	double v5; // xmm0_8
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+48h] [rbp+10h] BYREF

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = (__int64*)dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (__int64*)(a1[3] + 16i64);
		v4 = *((_DWORD*)v3 + 2);
		if (v4 != 3)
		{
			if (v4 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v9))
			{
				v5 = 0.0;
				goto LABEL_9;
			}
			v8 = 3;
			v3 = &v7;
			v7 = v9;
		}
		v5 = *(double*)v3;
	LABEL_9:
		sub_14054F560(*v2, (int)(float)((float)v5 * 1000.0));
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

