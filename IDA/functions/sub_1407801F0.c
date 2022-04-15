//----- (00000001407801F0) ----------------------------------------------------
__int64 __fastcall sub_1407801F0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rdi
	__int64 v5; // rsi
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rcx
	int v8; // ecx

	result = sub_14077FE40(a1);
	if (*(_DWORD*)(a1 + 544))
	{
		result = sub_1405B1510(&qword_140C7DFB0);
		v4 = result;
		if (result)
		{
			if (*(_DWORD*)(result + 48) == 5)
			{
				result = sub_1405845F0(v3, *(_QWORD*)(result + 40));
				v5 = result;
				if (!result
					|| (result = sub_1405AFF90(v4), (_DWORD)result)
					|| (v6 = *(int*)(v5 + 772), v6 >= 0xA)
					|| (v7 = v5 + 8 * (5 * v6 + 3)) == 0
					|| *(int*)(v7 + 8) >= 0
					|| !qword_140C7DFD8)
				{
				LABEL_10:
					*(_DWORD*)(a1 + 240) = 0;
					*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
					*(_DWORD*)(a1 + 544) = 0;
					return result;
				}
			}
			else
			{
				result = qword_140C635F0;
				if (*(_QWORD*)(v4 + 32) != *(_QWORD*)(qword_140C635F0 + 5792))
					goto LABEL_10;
				result = *(_QWORD*)(v4 + 232);
				if (!result || !*(_DWORD*)(v4 + 272))
					result = 0i64;
				v8 = *(_DWORD*)(result + 184);
				if ((v8 & 0xFFFFFFFA) != 0)
					goto LABEL_10;
				if (v8 == 4)
					goto LABEL_10;
				result = sub_1405AFF90(v4);
				if ((_DWORD)result)
					goto LABEL_10;
			}
			*(_DWORD*)(a1 + 544) = 1;
		}
	}
	return result;
}
// 140780233: variable 'v3' is possibly undefined
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFD8: using guessed type __int64 qword_140C7DFD8;

