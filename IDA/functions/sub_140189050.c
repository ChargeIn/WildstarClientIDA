//----- (0000000140189050) ----------------------------------------------------
signed __int64 __fastcall sub_140189050(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int64 v5; // r10
	signed __int64 result; // rax
	float v8; // xmm0_4
	float v9; // xmm2_4
	__int64 v10; // rcx
	float v11; // xmm1_4
	bool v12; // cc
	float v13; // xmm3_4
	unsigned __int64 v14; // rbx
	unsigned __int64 i; // rcx
	__int128 v16; // xmm2
	int v17; // xmm1_4
	__int128 v18; // [rsp+20h] [rbp-28h]

	v5 = a2;
	result = (a2 - a1) & 0xFFFFFFFFFFFFFFE0ui64;
	if (result > 512)
	{
		do
		{
			if (!a4)
				return sub_140189320(a1, v5, v5);
			v8 = *(float*)(a1 + 16);
			v9 = *(float*)(v5 - 16);
			--a4;
			v10 = 32 * (((__int64)(v5 - a1) >> 5) / 2) + a1;
			v11 = *(float*)(v10 + 16);
			if (v8 >= v11)
			{
				if (v8 >= v9)
				{
					v12 = v9 <= v11;
				LABEL_9:
					if (!v12)
						v10 = v5 - 32;
					goto LABEL_11;
				}
				v10 = a1;
			}
			else if (v11 >= v9)
			{
				v10 = a1;
				v12 = v9 <= v8;
				goto LABEL_9;
			}
		LABEL_11:
			v13 = *(float*)(v10 + 16);
			v14 = a1;
			v18 = *(_OWORD*)v10;
			for (i = v5; ; *(_DWORD*)(i + 16) = v17)
			{
				for (; v13 > *(float*)(v14 + 16); v14 += 32i64)
					;
				for (i -= 32i64; v13 < *(float*)(i + 16); i -= 32i64)
					;
				if (v14 >= i)
					break;
				v16 = *(_OWORD*)v14;
				v17 = *(_DWORD*)(v14 + 16);
				v14 += 32i64;
				*(_OWORD*)(v14 - 32) = *(_OWORD*)i;
				*(_DWORD*)(v14 - 16) = *(_DWORD*)(i + 16);
				*(_OWORD*)i = v16;
			}
			result = sub_140189050(v14, v5, 0i64, a4, v18, *((_QWORD*)&v18 + 1));
			v5 = v14;
		} while ((__int64)((v14 - a1) & 0xFFFFFFFFFFFFFFE0ui64) > 512);
	}
	return result;
}

