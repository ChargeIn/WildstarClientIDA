//----- (00000001401DAB50) ----------------------------------------------------
__int64 __fastcall sub_1401DAB50(__int64 a1, __int64 a2, float a3)
{
	__int64 v4; // rbx
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rax
	int v8; // eax
	__int64 v9; // r8
	__int64 v10; // r9
	int v11; // eax
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rdx
	int v17; // eax
	unsigned __int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 result; // rax
	__int64(__fastcall * v21)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v22; // ebp
	__int64 v23; // rax
	__int64(__fastcall * v24)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v25; // ebp
	__int64 v26; // rax
	__int64(__fastcall * v27)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v28; // ebp
	__int64 v29; // rax
	__int64(__fastcall * v30)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v31; // ebp
	__int64 v32; // rax
	__int64(__fastcall * v33)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v34; // ebp
	__int64 v35; // rax
	__int64(__fastcall * v36)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v37; // ebp
	__int64 v38; // rax
	__int64(__fastcall * v39)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v40; // ebp
	__int64 v41; // rax
	__int64(__fastcall * v42)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v43; // esi
	__int64 v44; // rax

	v4 = 0i64;
	*(float*)(a1 + 24) = a3 * *(float*)(a2 + 136);
	v6 = *(_QWORD*)(a2 + 8);
	if (v6)
	{
		if (v6 <= qword_140C3FE70)
			v7 = v6 + qword_140C3FE68;
		else
			v7 = 0i64;
	}
	else
	{
		v7 = 0i64;
	}
	*(_QWORD*)a1 = v7;
	*(_DWORD*)(a1 + 8) = 0;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 184);
	v8 = *(_DWORD*)(a2 + 188);
	*(_DWORD*)(a1 + 20) = 0;
	*(_DWORD*)(a1 + 16) = v8;
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(a2 + 64);
	v9 = a2 - a1;
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a2 + 68);
	v10 = 6i64;
	*(_DWORD*)(a1 + 100) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(a2 + 80);
	v11 = *(_DWORD*)(a2 + 84);
	v12 = (unsigned __int64*)(a1 + 120);
	*(_DWORD*)(a1 + 112) = v11;
	do
	{
		v13 = *(unsigned __int64*)((char*)v12 + v9 - 104);
		if (v13)
		{
			if (v13 <= qword_140C3FE70)
				v14 = v13 + qword_140C3FE68;
			else
				v14 = 0i64;
		}
		else
		{
			v14 = 0i64;
		}
		*v12++ = v14;
		--v10;
	} while (v10);
	v15 = a1 + 28;
	v16 = 16i64;
	do
	{
		v17 = *(_DWORD*)(v9 + v15 + 244);
		v15 += 4i64;
		*(_DWORD*)(v15 - 4) = v17;
		--v16;
	} while (v16);
	*(_DWORD*)(a1 + 168) = 0;
	v18 = *(_QWORD*)(a2 + 88);
	if (v18)
	{
		if (v18 <= qword_140C3FE70)
			v19 = v18 + qword_140C3FE68;
		else
			v19 = 0i64;
	}
	else
	{
		v19 = 0i64;
	}
	*(_QWORD*)(a1 + 176) = v19;
	*(_DWORD*)(a1 + 184) = *(_DWORD*)(a2 + 96);
	result = 0i64;
	*(_QWORD*)(a1 + 188) = 0i64;
	*(_QWORD*)(a1 + 196) = 0i64;
	*(_QWORD*)(a1 + 204) = 0i64;
	*(_QWORD*)(a1 + 212) = 0i64;
	*(_QWORD*)(a1 + 220) = 0i64;
	*(_QWORD*)(a1 + 228) = 0i64;
	if (*(_DWORD*)(a2 + 100))
	{
		*(_BYTE*)(a1 + 220) = 0;
		v21 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		*(_DWORD*)(a1 + 188) = 1;
		v22 = *(_DWORD*)(a2 + 100);
		if (v21)
		{
			v23 = v21(off_140A6B630, v22, qword_140C63858);
		}
		else if (dword_140C655EC)
		{
			v23 = 0i64;
		}
		else if ((int)sub_1402160E0() >= 0)
		{
			v23 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v22);
		}
		else
		{
			v23 = 0i64;
		}
		result = *(unsigned __int8*)(v23 + 4);
		*(_BYTE*)(a1 + 228) = result;
	}
	if (*(_DWORD*)(a2 + 104))
	{
		v24 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		*(_DWORD*)(a1 + 192) = 1;
		*(_BYTE*)(a1 + 221) = 1;
		v25 = *(_DWORD*)(a2 + 104);
		if (v24)
		{
			v26 = v24(off_140A6B630, v25, qword_140C63858);
		}
		else if (dword_140C655EC)
		{
			v26 = 0i64;
		}
		else if ((int)sub_1402160E0() >= 0)
		{
			v26 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v25);
		}
		else
		{
			v26 = 0i64;
		}
		result = *(unsigned __int8*)(v26 + 4);
		*(_BYTE*)(a1 + 229) = result;
	}
	if (*(_DWORD*)(a2 + 108))
	{
		v27 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		*(_DWORD*)(a1 + 196) = 3;
		*(_BYTE*)(a1 + 222) = 0;
		v28 = *(_DWORD*)(a2 + 108);
		if (v27)
		{
			v29 = v27(off_140A6B630, v28, qword_140C63858);
		}
		else if (dword_140C655EC)
		{
			v29 = 0i64;
		}
		else if ((int)sub_1402160E0() >= 0)
		{
			v29 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v28);
		}
		else
		{
			v29 = 0i64;
		}
		result = *(unsigned __int8*)(v29 + 4);
		*(_BYTE*)(a1 + 230) = result;
	}
	if (*(_DWORD*)(a2 + 112))
	{
		v30 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		*(_DWORD*)(a1 + 200) = 3;
		*(_BYTE*)(a1 + 223) = 1;
		v31 = *(_DWORD*)(a2 + 112);
		if (v30)
		{
			v32 = v30(off_140A6B630, v31, qword_140C63858);
		}
		else if (dword_140C655EC)
		{
			v32 = 0i64;
		}
		else if ((int)sub_1402160E0() >= 0)
		{
			v32 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v31);
		}
		else
		{
			v32 = 0i64;
		}
		result = *(unsigned __int8*)(v32 + 4);
		*(_BYTE*)(a1 + 231) = result;
	}
	if (*(_DWORD*)(a2 + 116))
	{
		v33 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		*(_DWORD*)(a1 + 204) = 5;
		*(_BYTE*)(a1 + 224) = 0;
		v34 = *(_DWORD*)(a2 + 116);
		if (v33)
		{
			v35 = v33(off_140A6B630, v34, qword_140C63858);
		}
		else if (dword_140C655EC)
		{
			v35 = 0i64;
		}
		else if ((int)sub_1402160E0() >= 0)
		{
			v35 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v34);
		}
		else
		{
			v35 = 0i64;
		}
		result = *(unsigned __int8*)(v35 + 4);
		*(_BYTE*)(a1 + 232) = result;
	}
	if (*(_DWORD*)(a2 + 120))
	{
		v36 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		*(_DWORD*)(a1 + 208) = 5;
		*(_BYTE*)(a1 + 225) = 1;
		v37 = *(_DWORD*)(a2 + 120);
		if (v36)
		{
			v38 = v36(off_140A6B630, v37, qword_140C63858);
		}
		else if (dword_140C655EC)
		{
			v38 = 0i64;
		}
		else if ((int)sub_1402160E0() >= 0)
		{
			v38 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v37);
		}
		else
		{
			v38 = 0i64;
		}
		result = *(unsigned __int8*)(v38 + 4);
		*(_BYTE*)(a1 + 233) = result;
	}
	if (*(_DWORD*)(a2 + 124))
	{
		v39 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		*(_DWORD*)(a1 + 212) = 0x7FFFFFFF;
		*(_BYTE*)(a1 + 226) = 0;
		v40 = *(_DWORD*)(a2 + 124);
		if (v39)
		{
			v41 = v39(off_140A6B630, v40, qword_140C63858);
		}
		else if (dword_140C655EC)
		{
			v41 = 0i64;
		}
		else if ((int)sub_1402160E0() >= 0)
		{
			v41 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v40);
		}
		else
		{
			v41 = 0i64;
		}
		result = *(unsigned __int8*)(v41 + 4);
		*(_BYTE*)(a1 + 234) = result;
	}
	if (*(_DWORD*)(a2 + 128))
	{
		v42 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		*(_DWORD*)(a1 + 216) = 0x7FFFFFFF;
		*(_BYTE*)(a1 + 227) = 1;
		v43 = *(_DWORD*)(a2 + 128);
		if (v42)
		{
			v44 = v42(off_140A6B630, v43, qword_140C63858);
		}
		else
		{
			if (dword_140C655EC || (int)sub_1402160E0() < 0)
				goto LABEL_90;
			v44 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 24i64))(qword_140C63A78, v43);
		}
		v4 = v44;
	LABEL_90:
		result = *(unsigned __int8*)(v4 + 4);
		*(_BYTE*)(a1 + 235) = result;
	}
	return result;
}
// 140A6B630: using guessed type wchar_t *off_140A6B630[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A78: using guessed type __int64 qword_140C63A78;
// 140C655EC: using guessed type int dword_140C655EC;

