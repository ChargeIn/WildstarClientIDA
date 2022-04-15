#include "../winhttp.h"

//----- (00000001405DBD60) ----------------------------------------------------
__int64 __fastcall sub_1405DBD60(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	unsigned __int16* v7; // r11
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	int v11; // r11d
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	int v15; // r11d
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	int v19; // r11d
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	int v23; // r11d
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	int v27; // r11d
	_QWORD* v28; // rax
	unsigned __int16* v29; // r11
	__int64 v30; // r10
	__int64 v31; // rdx
	unsigned __int16* v32; // r9
	__int64 v33; // rcx
	__int64 v34; // rbx
	__int64 v35; // rbx
	char v36; // bp
	int* v37; // rax
	int* v38; // rdi
	unsigned __int64 v39; // rbx
	int* v40; // rbx
	__int16* v41; // rax
	int* v42; // rsi
	__int64 v43; // rdi
	int* v44; // rax
	unsigned __int64 v45; // rdi
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	unsigned __int16** v49; // r11
	unsigned __int16* v50; // r9
	__int64 result; // rax

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v6, L"strCharacterName", v7);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v10, L"nClassId", v11);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v14, L"nRaceId", v15);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v18 = *(_QWORD*)(v17 + 16);
	*(_QWORD*)v18 = *v16;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(v17 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v18, L"nPathId", v19);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v22 = *(_QWORD*)(v21 + 16);
	*(_QWORD*)v22 = *v20;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
	*(_QWORD*)(v21 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v22, L"nLevel", v23);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v26 = *(_QWORD*)(v25 + 16);
	*(_QWORD*)v26 = *v24;
	*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
	*(_QWORD*)(v25 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v26, L"nFactionId", v27);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	sub_1405DA960(*(_DWORD*)(a1 + 40));
	v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v31 = *(_QWORD*)(v30 + 16);
	v32 = (unsigned __int16*)&unk_1409F390C;
	*(_QWORD*)v31 = *v28;
	*(_DWORD*)(v31 + 8) = *((_DWORD*)v28 + 2);
	*(_QWORD*)(v30 + 16) += 16i64;
	if (v29)
		v32 = v29;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v31, L"strWorldZone", v32);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v34 = *(_QWORD*)(a1 + 56);
	if (v34)
	{
		v35 = *(_QWORD*)(v34 - 8);
		v36 = 1;
		v37 = sub_14018B280(2 * v35 + 18, 0);
		if (v37)
		{
			*((_QWORD*)v37 + 1) = v35;
			*(_QWORD*)v37 = off_140B55060;
		}
		else
		{
			v37 = 0i64;
		}
		v38 = v37 + 4;
		v39 = 2 * v35;
		sub_1407DB590(v37 + 4, *(int**)(a1 + 56), v39);
		*(_WORD*)((char*)v38 + v39) = 0;
		v40 = v38;
	}
	else
	{
		v36 = 2;
		v41 = sub_14034BDD0(v33, 108);
		v42 = (int*)v41;
		if (v41)
		{
			v43 = 0i64;
			if (*v41)
			{
				do
					++v43;
				while (v41[v43]);
			}
			v44 = sub_14018B280(2 * v43 + 18, 0);
			if (v44)
			{
				*((_QWORD*)v44 + 1) = v43;
				*(_QWORD*)v44 = off_140B55060;
			}
			else
			{
				v44 = 0i64;
			}
			v40 = v44 + 4;
			v45 = 2 * v43;
			sub_1407DB590(v44 + 4, v42, v45);
			*(_WORD*)((char*)v40 + v45) = 0;
		}
		else
		{
			v40 = 0i64;
		}
		v38 = v40;
	}
	v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v48 = *(_QWORD*)(v47 + 16);
	v50 = *v49;
	*(_QWORD*)v48 = *v46;
	*(_DWORD*)(v48 + 8) = *((_DWORD*)v46 + 2);
	*(_QWORD*)(v47 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v48, L"strRealm", v50);
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	if ((v36 & 2) != 0)
	{
		v36 &= ~2u;
		if (v40)
			result = (*(__int64(__fastcall**)(int*))(*((_QWORD*)v40 - 2) + 8i64))(v40 - 4);
	}
	if ((v36 & 1) != 0)
	{
		if (v38)
			return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v38 - 2) + 8i64))(v38 - 4);
	}
	return result;
}
// 1405DBDA7: variable 'v5' is possibly undefined
// 1405DBDCA: variable 'v7' is possibly undefined
// 1405DBDF4: variable 'v9' is possibly undefined
// 1405DBE17: variable 'v11' is possibly undefined
// 1405DBE41: variable 'v13' is possibly undefined
// 1405DBE64: variable 'v15' is possibly undefined
// 1405DBE8E: variable 'v17' is possibly undefined
// 1405DBEB1: variable 'v19' is possibly undefined
// 1405DBEDB: variable 'v21' is possibly undefined
// 1405DBEFE: variable 'v23' is possibly undefined
// 1405DBF28: variable 'v25' is possibly undefined
// 1405DBF4B: variable 'v27' is possibly undefined
// 1405DBF7C: variable 'v30' is possibly undefined
// 1405DBFA6: variable 'v29' is possibly undefined
// 1405DC01F: variable 'v33' is possibly undefined
// 1405DC0AB: variable 'v47' is possibly undefined
// 1405DC0AF: variable 'v49' is possibly undefined
// 140B22C28: using guessed type wchar_t aStrrealm_0[9];
// 140B22C48: using guessed type wchar_t aStrworldzone_2[13];
// 140B22C68: using guessed type wchar_t aNlevel_9[7];
// 140B22C78: using guessed type wchar_t aNfactionid_1[11];
// 140B22C90: using guessed type wchar_t aNraceid[8];
// 140B22CA0: using guessed type wchar_t aNpathid_3[8];
// 140B22CB0: using guessed type wchar_t aStrcharacterna_3[17];
// 140B22CD8: using guessed type wchar_t aNclassid_3[9];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

