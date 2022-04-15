//----- (0000000140837F20) ----------------------------------------------------
__int64 __fastcall sub_140837F20(__int64 a1, __int64 a2, float a3, unsigned __int64 a4, int* a5, char a6)
{
	bool v10; // r14
	float v11; // xmm2_4
	__int64 v12; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rcx
	_QWORD* v16; // rbx
	bool v17; // zf
	__int64 v18; // rax
	__int64 v19; // rdx
	int v20; // r15d

	v10 = !a2 || a3 != *(float*)(a2 + 8);
	if (*a5 > 0 && v10)
	{
		if (a2)
		{
			v11 = *(float*)(a2 + 8);
		}
		else
		{
			v12 = sub_140834F40((__int64*)(a1 + 24), 0i64);
			if (v12)
				v11 = *(float*)(v12 + 8);
			else
				v11 = *(float*)(a1 + 16);
		}
		if (sub_140836090(a1, a4, v11, a3, a5, a6))
			return 1i64;
	}
	else
	{
		v14 = *(_QWORD**)(a1 + 48);
		if (v14)
		{
			v15 = 0i64;
			v16 = v14;
			while (v16[4] != a4)
			{
				v15 = v16;
				v16 = (_QWORD*)v16[1];
				if (!v16)
					goto LABEL_25;
			}
			v17 = v16 == v14;
			v18 = v16[1];
			if (v17)
				*(_QWORD*)(a1 + 48) = v18;
			else
				v15[1] = v18;
			v19 = v16[2];
			v20 = dword_140C10F20;
			*v16 = &off_1409A2EB8;
			if (v19)
				sub_14083B060(qword_140C61B70, v19, (__int64)v16);
			sub_140881720(v20, (__int64)v16);
		}
	}
LABEL_25:
	if (!v10 && !a6)
		return 1i64;
	return sub_140835840(a1, a2, a3, a4, a6);
}
// 1409A2EB8: using guessed type __int64 (__fastcall *off_1409A2EB8)();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B70: using guessed type __int64 qword_140C61B70;

