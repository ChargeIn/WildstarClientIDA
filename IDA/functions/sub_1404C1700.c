#include "../winhttp.h"

//----- (00000001404C1700) ----------------------------------------------------
void __fastcall sub_1404C1700(__m128* a1)
{
	__int64 v2; // rsi
	__int64 v3; // rax
	__int64 v4; // rdi
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // rcx
	__int64 v8; // rdx
	__int64 v9; // rax
	unsigned __int64 v10; // rdx
	_WORD* v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	unsigned __int64 v15; // rcx
	unsigned __int64 v16; // rdx
	__m128** v17; // rcx
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // rcx
	unsigned __int64 v20; // rcx
	unsigned __int64 v21; // rcx
	unsigned __int64 v22; // rcx

	if (a1[40].m128_i32[0])
	{
		sub_1404C19C0(a1);
	}
	else
	{
		v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 29256) + 32i64))(*(_QWORD*)(qword_140C65898 + 29256));
		v3 = sub_140203520(a1[6].m128_u32[3]);
		v4 = v3;
		if (v3)
		{
			v5 = *(_QWORD*)(v3 + 8);
			if (v5)
			{
				if (v5 <= qword_140C3FE70)
					v6 = v5 + qword_140C3FE68;
				else
					v6 = 0i64;
			}
			else
			{
				v6 = 0i64;
			}
			if ((*(int(__fastcall**)(__int64, unsigned __int64, __m128*, _QWORD))(*(_QWORD*)v2 + 40i64))(
				v2,
				v6,
				a1 + 38,
				0i64) < 0)
				goto LABEL_46;
			if (a1[8].m128_i32[0] == 3)
			{
				v7 = *(_QWORD*)(v4 + 8);
				if (v7)
					v8 = v7 <= qword_140C3FE70 ? v7 + qword_140C3FE68 : 0i64;
				else
					v8 = 0i64;
				if ((*(int(__fastcall**)(__int64, __int64, __int64*, _QWORD))(*(_QWORD*)v2 + 40i64))(
					v2,
					v8,
					&a1[38].m128_i64[1],
					0i64) < 0)
					goto LABEL_46;
			}
			v9 = sub_140203DA0(a1[6].m128_u32[0]);
			if (v9)
			{
				v10 = *(_QWORD*)(v9 + 56);
				v11 = 0i64;
				if (v10 && v10 <= qword_140C3FE70)
					v11 = (_WORD*)(qword_140C3FE68 + v10);
				v12 = 0i64;
				if (*v11)
				{
					do
						++v12;
					while (v11[v12]);
					if (v12)
					{
						if (v10)
							v13 = v10 <= qword_140C3FE70 ? qword_140C3FE68 + v10 : 0i64;
						else
							v13 = 0i64;
						if ((*(int(__fastcall**)(__int64, __int64, __int64*, _QWORD))(*(_QWORD*)v2 + 40i64))(
							v2,
							v13,
							&a1[39].m128_i64[1],
							0i64) < 0)
							goto LABEL_46;
					}
				}
			}
			if (a1[19].m128_i32[0]
				&& !sub_1404C06C0((__int64)a1)
				&& ((dword_140DC3190 & 1) != 0
					? (v14 = qword_140DC3198)
					: (dword_140DC3190 |= 1u, v14 = sub_140203520(0xDDu), qword_140DC3198 = v14),
					!v14
					|| ((v15 = *(_QWORD*)(v14 + 8)) != 0
						? (v15 <= qword_140C3FE70
							? (v16 = v15 + qword_140C3FE68)
							: (v16 = 0i64))
						: (v16 = 0i64),
						(*(int(__fastcall**)(__int64, unsigned __int64, __m128*, _QWORD))(*(_QWORD*)v2 + 40i64))(
							v2,
							v16,
							a1 + 39,
							0i64) < 0)))
			{
			LABEL_46:
				v19 = a1[38].m128_u64[0];
				if (v19)
				{
					(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v19 + 8i64))(v19);
					a1[38].m128_u64[0] = 0i64;
				}
				v20 = a1[38].m128_u64[1];
				if (v20)
				{
					(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v20 + 8i64))(v20);
					a1[38].m128_u64[1] = 0i64;
				}
				v21 = a1[39].m128_u64[0];
				if (v21)
				{
					(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v21 + 8i64))(v21);
					a1[39].m128_u64[0] = 0i64;
				}
				v22 = a1[39].m128_u64[1];
				if (v22)
				{
					(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v22 + 8i64))(v22);
					a1[39].m128_u64[1] = 0i64;
				}
			}
			else
			{
				sub_1404C6B10((__int64)a1);
				if (!(*(unsigned int(__fastcall**)(__m128*))(a1->m128_u64[0] + 32))(a1))
				{
					v17 = (__m128**)(a1[18].m128_u64[1] + 144);
					if (!a1[1].m128_u64[0])
					{
						a1[1].m128_u64[0] = (unsigned __int64)v17;
						a1[1].m128_u64[1] = (unsigned __int64)*v17;
						*v17 = a1;
						v18 = a1[1].m128_u64[1];
						if (v18)
							*(_QWORD*)(v18 + 16) = (char*)a1 + 24;
					}
				}
			}
		}
	}
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3190: using guessed type int dword_140DC3190;
// 140DC3198: using guessed type __int64 qword_140DC3198;

