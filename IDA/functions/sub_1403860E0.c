//----- (00000001403860E0) ----------------------------------------------------
__int64 __fastcall sub_1403860E0(__int64 a1)
{
	unsigned __int64 v1; // rsi
	unsigned __int64 i; // rdi
	__int64 v4; // rax
	int v5; // xmm0_4
	__int64 v6; // r8
	__int64 v7; // rcx
	float v8; // xmm0_4
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v12; // [rsp+50h] [rbp+8h] BYREF
	int v13; // [rsp+58h] [rbp+10h] BYREF
	int v14; // [rsp+5Ch] [rbp+14h]

	v1 = *(_QWORD*)(a1 + 80);
	if (!v1)
		return *(_QWORD*)(a1 + 88);
	sub_14038A050(a1, *(__int64**)(a1 + 72), *(_QWORD*)(a1 + 80));
	for (i = 0i64; i < v1; ++i)
	{
		v4 = *(_QWORD*)(a1 + 72);
		v5 = *(_DWORD*)(a1 + 16);
		v6 = *(_QWORD*)(a1 + 8);
		v12 = 0i64;
		v7 = *(_QWORD*)(v4 + 8 * i);
		v14 = v5;
		v13 = 0;
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, int*, __int64*, __int64))(*(_QWORD*)v7 + 112i64))(
			v7,
			*(_QWORD*)a1,
			v6,
			&v13,
			&v12,
			a1 + 24)
			&& (v8 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12), v8 < *(float*)(a1 + 16)))
		{
			v9 = v12;
			*(float*)(a1 + 16) = v8;
			if (*(_QWORD*)(a1 + 88) != v9)
			{
				if (v9)
				{
					(**(void(__fastcall***)(__int64))v9)(v9);
					v9 = v12;
				}
				v10 = *(_QWORD*)(a1 + 88);
				if (v10)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v10 + 8i64))(*(_QWORD*)(a1 + 88));
					v9 = v12;
				}
				*(_QWORD*)(a1 + 88) = v9;
			}
		}
		else
		{
			v9 = v12;
		}
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	}
	return *(_QWORD*)(a1 + 88);
}
// 140386116: conditional instruction was optimized away because rsi.8!=0

