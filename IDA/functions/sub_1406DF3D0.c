//----- (00000001406DF3D0) ----------------------------------------------------
__int64 __fastcall sub_1406DF3D0(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rcx
	int v4; // eax
	unsigned __int64 v5; // rcx
	double v6; // xmm0_8
	unsigned __int64 v7; // rax
	unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_1406DF190(a1);
	if ((*(_BYTE*)(v2 + 28) & 1) != 0)
	{
		v3 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (_DWORD*)(a1[3] + 16i64);
		v4 = v3[2];
		if (v4 == 3 || v4 == 4 && sub_14005AC80((char*)(*(_QWORD*)v3 + 32i64), &v9))
		{
			v6 = sub_140056C40(a1, 2u);
			v7 = 0i64;
			if (v6 >= 9.223372036854776e18)
			{
				v6 = v6 - 9.223372036854776e18;
				if (v6 < 9.223372036854776e18)
					v7 = 0x8000000000000000ui64;
			}
			v5 = v7 + (unsigned int)(int)v6;
		}
		else
		{
			v5 = *(_QWORD*)sub_140056AB0(a1, 2u);
		}
		*(_QWORD*)(v2 + 1032) = v5;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

