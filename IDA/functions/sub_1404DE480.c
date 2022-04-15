//----- (00000001404DE480) ----------------------------------------------------
__int64 __fastcall sub_1404DE480(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64* v5; // rdi
	__int64 v6; // rsi
	__int128 v7; // xmm0
	__int64 v8; // xmm1_8
	__int64 v9; // rbx
	__int64 v10; // rax
	__int128 v11; // xmm0
	__int64 v12; // xmm1_8
	__int64 v13; // rax
	int* v14; // rcx
	int* v15; // rsi
	unsigned __int64 v16; // r8
	unsigned __int64 v17; // rbx
	unsigned __int64 v18; // rbx
	__int128 v19; // [rsp+30h] [rbp-C8h] BYREF
	__int64 v20; // [rsp+40h] [rbp-B8h]
	int v21; // [rsp+48h] [rbp-B0h]
	int v22[32]; // [rsp+50h] [rbp-A8h] BYREF

	result = sub_140208A20(a2);
	if (result)
	{
		if (qword_140C65898 && (v5 = *(__int64**)(qword_140C65898 + 30088)) != 0i64)
		{
			result = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(*v5 + 336))(v5, a2, 0i64);
			v6 = result;
			if (result)
			{
				v7 = *(_OWORD*)(result + 156);
				v8 = *(_QWORD*)(result + 172);
				v9 = 0i64;
				v21 = *(_DWORD*)(result + 180);
				v10 = *v5;
				v19 = v7;
				v20 = v8;
				if (!(*(unsigned int(__fastcall**)(__int64*, __int128*, int*, __int64, _DWORD))(v10 + 248))(
					v5,
					&v19,
					v22,
					64i64,
					0))
				{
					v11 = *(_OWORD*)(v6 + 184);
					v12 = *(_QWORD*)(v6 + 200);
					v21 = *(_DWORD*)(v6 + 208);
					v13 = *v5;
					v19 = v11;
					v20 = v12;
					(*(void(__fastcall**)(__int64*, __int128*, int*, __int64, _DWORD))(v13 + 248))(v5, &v19, v22, 64i64, 0);
				}
				if (LOWORD(v22[0]))
				{
					do
						++v9;
					while (*((_WORD*)v22 + v9));
				}
				v14 = *(int**)(a1 + 128);
				v15 = (int*)((char*)v22 + 2 * v9);
				v16 = (__int64)(*(_QWORD*)(a1 + 136) - (_QWORD)v14) >> 1;
				v17 = (2 * v9) >> 1;
				if (v17 > v16)
				{
					sub_1407DB590(v14, v22, 2 * v16);
					sub_14001C310(
						(_QWORD*)(a1 + 120),
						(int*)((char*)v22 + 2 * ((__int64)(*(_QWORD*)(a1 + 136) - *(_QWORD*)(a1 + 128)) >> 1)),
						v15);
				}
				else
				{
					v18 = 2 * v17;
					sub_1407DB590(v14, v22, v18);
					sub_14001C2B0(a1 + 120, (int*)(v18 + *(_QWORD*)(a1 + 128)), *(int**)(a1 + 136));
				}
				return *(_QWORD*)(a1 + 128);
			}
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

