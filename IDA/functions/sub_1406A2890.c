//----- (00000001406A2890) ----------------------------------------------------
__int64 __fastcall sub_1406A2890(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rcx
	unsigned __int16* v6; // rdx
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = *(_QWORD*)(v4 + 24)) != 0
		&& v5 <= qword_140C3FE70
		&& qword_140C3FE68 + v5)
	{
		if (v5 <= qword_140C3FE70)
			v6 = (unsigned __int16*)(qword_140C3FE68 + v5);
		else
			v6 = 0i64;
		v7 = (unsigned __int64*)sub_14018F0E0(&v10, v6)[1];
		if (v7)
		{
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v7 + v8));
			sub_140058710((__int64)a1, v7, v8);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v11)
		{
			sub_14018B900(v11, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1406A28F9: conditional instruction was optimized away because rcx.8!=0
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

