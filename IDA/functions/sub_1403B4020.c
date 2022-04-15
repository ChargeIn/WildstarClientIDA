#include "../winhttp.h"

//----- (00000001403B4020) ----------------------------------------------------
__int64 __fastcall sub_1403B4020(__int64 a1, float* a2)
{
	__int64 result; // rax
	int v4; // esi
	int v5; // edi
	float v6; // xmm8_4
	float v7; // xmm6_4
	float v8; // xmm7_4
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rbx
	bool v13; // zf
	__int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	float v20; // [rsp+2Ch] [rbp-4Ch]
	float v21; // [rsp+30h] [rbp-48h]

	result = *(_QWORD*)(a1 + 64);
	if (result)
	{
		v4 = *(_DWORD*)(result + 24);
		v5 = *(_DWORD*)(result + 28);
		v6 = (float)*(int*)(result + 32);
		switch (v4)
		{
		case 1:
			v7 = (float)(*(int(__fastcall**)(float*))(*(_QWORD*)a2 + 64i64))(a2);
			v8 = (float)(*(int(__fastcall**)(float*))(*(_QWORD*)a2 + 72i64))(a2);
			break;
		case 5:
			v7 = a2[135];
			v8 = a2[387];
			break;
		case 6:
			v7 = a2[136];
			v8 = a2[389];
			break;
		case 7:
			v7 = a2[137];
			v8 = a2[391];
			break;
		case 8:
			v7 = a2[138];
			v8 = a2[393];
			break;
		case 9:
			v7 = a2[139];
			v8 = a2[395];
			break;
		case 10:
			v7 = a2[140];
			v8 = a2[397];
			break;
		case 11:
			v7 = a2[141];
			v8 = a2[399];
			break;
		case 16:
			v7 = a2[142];
			v8 = a2[445];
			break;
		case 22:
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 56),
				0i64);
			v10 = v9;
			v8 = 0.0;
			if (!v9 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 64i64))(v9))
				v7 = 0.0;
			else
				v7 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v10 + 152i64))(v10);
			v11 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 56),
				0i64);
			v12 = v11;
			if (v11)
			{
				v13 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 64i64))(v11) == 0;
				goto LABEL_21;
			}
			break;
		case 23:
			v14 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 60),
				0i64);
			v15 = v14;
			v8 = 0.0;
			if (v14 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v14 + 64i64))(v14) == 1)
				v7 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v15 + 152i64))(v15);
			else
				v7 = 0.0;
			v16 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 60),
				0i64);
			v12 = v16;
			if (v16)
			{
				v13 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v16 + 64i64))(v16) == 1;
				goto LABEL_21;
			}
			break;
		case 24:
			v17 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 64),
				0i64);
			v18 = v17;
			v8 = 0.0;
			if (v17 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v17 + 64i64))(v17) == 2)
				v7 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v18 + 152i64))(v18);
			else
				v7 = 0.0;
			v19 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 64),
				0i64);
			v12 = v19;
			if (v19)
			{
				v13 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v19 + 64i64))(v19) == 2;
			LABEL_21:
				if (v13)
					v8 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v12 + 128i64))(v12);
			}
			break;
		case 27:
			v7 = a2[143];
			v8 = a2[469];
			break;
		case 28:
			v7 = a2[144];
			v8 = a2[473];
			break;
		case 29:
			v7 = a2[145];
			v8 = a2[477];
			break;
		default:
			v8 = v21;
			v7 = v20;
			break;
		}
		if (!v4)
			return 0i64;
		if (v5 > 4)
			v7 = (float)(v7 * 100.0) / v8;
		if ((unsigned int)sub_1407A1750(v5, v7, v6))
			return 0i64;
		else
			return 98i64;
	}
	return result;
}
// 1403B4316: variable 'v21' is possibly undefined
// 1403B431C: variable 'v20' is possibly undefined
// 140C65980: using guessed type __int64 qword_140C65980;

