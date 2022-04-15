#include "../winhttp.h"

//----- (000000014046C300) ----------------------------------------------------
void __fastcall sub_14046C300(__m128* a1, int a2, int a3)
{
	unsigned __int64 v5; // rax
	__m128* v6; // rcx
	int v7; // edi
	__m128* v8; // rdx
	__int128 v9; // xmm1
	__int128 v10; // xmm1
	__int64 v11; // xmm0_8
	__int64 v12; // rax
	__m128 v13; // xmm0
	__int32 v14; // eax
	__int32 v15; // ecx
	__int64 v16; // rax
	__int128 v17; // [rsp+20h] [rbp-58h] BYREF
	__int128 v18; // [rsp+30h] [rbp-48h]
	__int128 v19; // [rsp+40h] [rbp-38h]
	__int128 v20; // [rsp+50h] [rbp-28h]
	__int64 v21; // [rsp+60h] [rbp-18h]

	if (a2 || a1[394].m128_i32[2])
	{
		v5 = a1[400].m128_u64[1];
		v6 = a1 + 401;
		v7 = 0;
		v8 = (__m128*)dword_140C48150;
		v9 = *(_OWORD*)(v5 + 16);
		v17 = *(_OWORD*)v5;
		v18 = v9;
		v10 = *(_OWORD*)(v5 + 48);
		v19 = *(_OWORD*)(v5 + 32);
		v20 = v10;
		v11 = *(_QWORD*)(v5 + 64);
		v6[-7].m128_i32[2] = 0;
		v21 = v11;
		if ((((unsigned __int8)v6 | (unsigned __int8)dword_140C48150) & 0xF) != 0)
		{
			sub_1407DB590((int*)v6, dword_140C48150, 0x1CB0ui64);
		}
		else
		{
			v12 = 57i64;
			do
			{
				v13 = *v8;
				v6 += 8;
				v8 += 8;
				v6[-8] = v13;
				v6[-7] = v8[-7];
				v6[-6] = v8[-6];
				v6[-5] = v8[-5];
				v6[-4] = v8[-4];
				v6[-3] = v8[-3];
				v6[-2] = v8[-2];
				v6[-1] = v8[-1];
				--v12;
			} while (v12);
			*v6 = *v8;
			v6[1] = v8[1];
			v6[2] = v8[2];
		}
		v14 = sub_14046C700((__int64)a1);
		v15 = a1[861].m128_i32[0];
		if (v14 != v15)
		{
			a1[28].m128_i32[0] = v15;
			a1[861].m128_i32[0] = v14;
		}
		sub_140479560((__int64)a1);
		sub_14047A060((__int64)a1);
		sub_140478FD0(a1, 1);
		if (!a3 && (unsigned int)sub_1407E6AF0((unsigned __int64*)&v17, a1[400].m128_i64[1], 0x48ui64))
		{
			sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"UnitActivationTypeChanged",
				byte_1409EDC54,
				a1->m128_u32[2],
				v17,
				v18,
				v19,
				v20,
				v21);
			v16 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v16)
				v7 = *(_DWORD*)(v16 + 264);
			if (v7 == a1->m128_i32[2])
				sub_14042E1B0(*(_QWORD*)(qword_140C65898 + 29504));
		}
	}
	sub_140478FD0(a1, 0);
	sub_1404792B0(a1);
}
// 1409EDC54: using guessed type _BYTE byte_1409EDC54[4];
// 140C48150: using guessed type int dword_140C48150[4];
// 140C65898: using guessed type __int64 qword_140C65898;

