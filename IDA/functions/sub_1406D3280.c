//----- (00000001406D3280) ----------------------------------------------------
__int64 __fastcall sub_1406D3280(__int64 a1, int* a2)
{
	__int64 v4; // rax
	bool v5; // zf
	__int64 v6; // rax
	int v7; // eax
	int v8; // eax
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rax
	__m128i* v14; // r9
	__m128i* v15; // rax
	__int64 v17; // [rsp+30h] [rbp-28h] BYREF
	__int64 v18; // [rsp+38h] [rbp-20h]

	sub_1406D31C0((_QWORD*)a1, (__int64)a2, 0);
	v4 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 664i64))(a1, a2);
	v5 = *(_BYTE*)(a1 + 2089) == 0;
	*(_QWORD*)(a1 + 1104) = v4;
	if (!v5)
	{
		v6 = *(_QWORD*)(a1 + 2096);
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 8);
			if (v7 == 2 || (unsigned int)(v7 - 5) <= 1)
			{
				v8 = a2[1] - *(_DWORD*)(a1 + 908);
				if ((*a2 - *(_DWORD*)(a1 + 904)) * (*a2 - *(_DWORD*)(a1 + 904)) + v8 * v8 >= 49
					&& !*(_QWORD*)(*(_QWORD*)(a1 + 32) + 3384i64)
					&& (unsigned int)sub_14018CDF0() - *(_DWORD*)(a1 + 932) > 0x7D)
				{
					v9 = *(_QWORD*)(a1 + 2096);
					v10 = *(_DWORD*)(v9 + 12);
					if (v10 < 300)
						v11 = *(unsigned __int8*)(v9 + 16) | ((unsigned __int64)(unsigned __int8)v10 << 8);
					else
						v11 = -1i64;
					v12 = sub_14018EFA0(&v17, (__int64)L"%d", *(unsigned int*)(v9 + 88))[1];
					v13 = *(_QWORD*)(*(_QWORD*)(a1 + 2096) + 40i64);
					if (v13)
					{
						v15 = *(__m128i**)(v13 + 32);
						v14 = (__m128i*) & word_140B7B704;
						if (v15)
							v14 = v15;
					}
					else
					{
						v14 = 0i64;
					}
					sub_1406D4D50(a1, 0, *(int**)(a1 + 1072), v14, v11, v12);
					if (v18)
						sub_14018B900(v18, 0);
				}
			}
		}
	}
	return sub_1400D23B0(a1, a2);
}
// 140B3B8EC: using guessed type wchar_t aD_63[3];
// 140B7B704: using guessed type __int16 word_140B7B704;

