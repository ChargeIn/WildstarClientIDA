//----- (000000014073EF30) ----------------------------------------------------
__int64 __fastcall sub_14073EF30(_QWORD* a1)
{
	_QWORD* v2; // rax
	_DWORD** v3; // rbx
	unsigned int v4; // eax
	_DWORD* v5; // rbx
	unsigned int v6; // ecx
	int v7; // edx

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	v3 = (_DWORD**)v2;
	if (v2)
	{
		if (*v2)
		{
			v4 = sub_140056D60(a1, 2u);
			v5 = *v3;
			v6 = v5[19];
			if (v6 <= 7)
			{
				v7 = 145;
				if (_bittest(&v7, v6))
				{
					if (v4 <= 3)
					{
						v5[18] = v4;
						sub_14073E320((__int64)v5);
						v5[24] = 1;
					}
				}
			}
		}
	}
	return 0i64;
}
// 14073EF86: conditional instruction was optimized away because ecx.4<8u
// 14073EF90: conditional instruction was optimized away because eax.4<4u

