#include "../winhttp.h"

//----- (00000001404D9450) ----------------------------------------------------
void __fastcall sub_1404D9450(__m128* a1, unsigned int a2, double a3, double a4, __int64 a5)
{
	unsigned __int64 v5; // rax
	__int64 v8; // rcx
	int v9; // edx
	unsigned __int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__m128* v14; // rax
	__int64 v15; // rcx
	__m128* v16; // rbx

	v5 = a1[7].m128_u64[1];
	if (v5 && !*(_DWORD*)(v5 + 592) && !a1[1652].m128_i32[2] && !a1[1933].m128_i32[2] && !a1[1934].m128_i32[3])
	{
		v8 = a1[1816].m128_i64[1];
		if (v8 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 96i64))(v8))
		{
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "CSIKeyPressed", byte_1409E928C, a2, a5);
		}
		else
		{
			v9 = a1[1650].m128_i32[0];
			if (v9)
			{
				v10 = a1[1609].m128_u64[0];
				if (v10)
					LODWORD(v10) = *(_DWORD*)(v10 + 264);
				if ((_DWORD)v10 != v9)
					sub_14055B0E0((__int64)a1, v9, a3, a4);
				if (a2)
					sub_14039D2C0(a1, a1[1650].m128_i32[0]);
			}
			else
			{
				switch (a1[2034].m128_i32[0])
				{
				case 0:
					sub_14056F370(v8, a1[2034].m128_u32[1]);
					break;
				case 1:
					v13 = sub_1405A8A40(v8, a1[2034].m128_i32[1]);
					if (v13)
						sub_140553890(v13, a1[2034].m128_u32[2]);
					break;
				case 3:
					v11 = sub_140498A40(qword_140C65980, a1[2034].m128_u32[1], 0);
					if (v11)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 392i64))(v11);
					break;
				case 4:
					v12 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
						qword_140C65980,
						a1[2034].m128_u32[1],
						0i64);
					if (v12)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 504i64))(v12);
					break;
				case 6:
					v14 = (__m128*)sub_1403D90D0((__int64)a1, a1[2034].m128_i32[1]);
					v16 = v14;
					if (v14 && !(unsigned int)sub_1403D2400(v15, v14))
						sub_14047EA60(v16);
					break;
				case 7:
					sub_14048D680(v8, a1[2034].m128_u32[1]);
					break;
				case 8:
					sub_1403AA0A0(a1);
					break;
				case 9:
					sub_1403AA3A0(a1);
					break;
				default:
					return;
				}
			}
		}
	}
}
// 1404D955F: variable 'v8' is possibly undefined
// 1404D9625: variable 'v15' is possibly undefined
// 1409E928C: using guessed type _BYTE byte_1409E928C[88];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

