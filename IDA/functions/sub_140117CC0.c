//----- (0000000140117CC0) ----------------------------------------------------
__int64 __fastcall sub_140117CC0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64* v3; // rdi
	float v4; // xmm6_4
	_DWORD* v5; // rcx
	int v6; // eax
	int v7; // eax
	double v8; // xmm0_8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	int v11; // [rsp+28h] [rbp-20h]
	__int64 v12; // [rsp+58h] [rbp+10h] BYREF

	v2 = sub_140117A50(a1);
	if (v2)
	{
		v3 = (__int64*)dword_140A12138;
		v4 = 50.0;
		v5 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v5 = (_DWORD*)(a1[3] + 16i64);
		v6 = v5[2];
		if (v6 != 3 && (v6 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v5 + 32i64), (unsigned __int64*)&v12)))
			goto LABEL_15;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (__int64*)(a1[3] + 16i64);
		v7 = *((_DWORD*)v3 + 2);
		if (v7 != 3)
		{
			if (v7 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v12))
			{
				v8 = 0.0;
				goto LABEL_14;
			}
			v11 = 3;
			v3 = &v10;
			v10 = v12;
		}
		v8 = *(double*)v3;
	LABEL_14:
		v4 = v8;
	LABEL_15:
		*(float*)(v2 + 1896) = v4;
		*(_DWORD*)(v2 + 1892) = 0;
		*(_WORD*)(v2 + 1888) = 1;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

