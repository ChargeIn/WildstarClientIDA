//----- (00000001400BC8B0) ----------------------------------------------------
int __fastcall sub_1400BC8B0(__int64 a1, float a2)
{
	void** v2; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	int v7; // r10d
	int v8; // r11d
	int* v9; // r14
	unsigned __int64 v10; // rax
	_DWORD* v11; // rcx
	__int64 v12; // r8
	__int64 v13; // rdx
	int v14; // r9d
	unsigned __int64 v15; // rcx
	__int64 v16; // rax
	unsigned __int64 v17; // rax
	_DWORD* v18; // rcx
	int v19; // edx
	unsigned __int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rdi
	float* v23; // rax
	__int64 v24; // rdx
	int v25; // ecx
	float v26; // xmm0_4
	float v27; // xmm1_4
	bool v28; // cc
	float v29; // xmm0_4
	float v30; // xmm0_4
	float v31; // xmm0_4
	float v32; // xmm0_4
	float v33; // xmm0_4
	unsigned __int64 v34; // r9
	_QWORD* v35; // r8
	unsigned __int64 v36; // rdx
	_DWORD* v37; // rax
	__int64 v38; // rax
	unsigned __int64 v39; // rax
	_DWORD* v40; // rcx
	float* v41; // rdi
	float v42; // xmm1_4
	float v43; // xmm0_4
	float v44; // xmm0_4
	float v45; // xmm0_4
	__int64 v46; // rsi
	int CurrentThreadId; // edx
	__int64 v48; // rcx
	__int64 v49; // rax
	_WORD* v50; // rcx
	__int64 v51; // rdx
	__int16 v52; // ax
	unsigned __int64 v53; // rax
	HANDLE EventW; // rcx
	int v55; // edx
	__int64 v56; // rcx
	__int64 v57; // rax
	_WORD* v58; // rcx
	__int64 v59; // rdx
	__int16 v60; // ax
	unsigned __int64 v61; // rax
	HANDLE v62; // rcx
	int v63; // edx
	__int64 v64; // rcx
	__int64 v65; // rax
	_WORD* v66; // rcx
	__int64 v67; // rdx
	__int16 v68; // ax
	unsigned __int64 v69; // rax
	HANDLE v70; // rcx
	int v71; // edx
	__int64 v72; // rcx
	__int64 v73; // rax
	_WORD* v74; // rcx
	__int64 v75; // rdx
	__int16 v76; // ax
	unsigned __int64 v77; // rax
	HANDLE v78; // rcx
	int v79; // r8d
	__int64 v80; // rdx
	__int64 v81; // rax
	_WORD* v82; // rcx
	__int16 v83; // ax
	unsigned __int64 v84; // rax
	HANDLE v85; // rcx
	__int64 v87[2]; // [rsp+20h] [rbp-58h] BYREF
	void* retaddr; // [rsp+78h] [rbp+0h] BYREF

	v2 = &retaddr;
	if (a2 == 0.0)
		return (int)v2;
	v5 = sub_1402336C0(*(_DWORD*)(a1 + 536));
	v6 = sub_1402336C0(*(_DWORD*)(a1 + 544));
	if (v5)
		v7 = *(_DWORD*)(v5 + 4);
	else
		v7 = 0;
	if (v6)
		v8 = *(_DWORD*)(v6 + 4);
	else
		v8 = 0;
	v9 = (int*)(a1 + 496);
	v10 = 0i64;
	v11 = (_DWORD*)(a1 + 496);
	do
	{
		if (*v11 == v7)
			break;
		++v10;
		v11 += 2;
	} while (v10 < 4);
	v12 = -1i64;
	if (v10 != 4)
		goto LABEL_25;
	v13 = -1i64;
	v14 = 1;
	v15 = 0i64;
	v16 = a1 + 496;
	while (v8 && *(_DWORD*)v16 == v8 && v14)
	{
		v14 = 0;
	LABEL_21:
		++v15;
		v16 += 8i64;
		if (v15 >= 4)
			goto LABEL_24;
	}
	if (*(_DWORD*)v16)
	{
		if (v13 == -1 || *(float*)(a1 + 8 * v13 + 500) > *(float*)(v16 + 4))
			v13 = v15;
		goto LABEL_21;
	}
	v13 = v15;
LABEL_24:
	*(_DWORD*)(a1 + 8 * v13 + 496) = v7;
	*(_DWORD*)(a1 + 8 * v13 + 500) = 0;
LABEL_25:
	v17 = 0i64;
	v18 = (_DWORD*)(a1 + 496);
	do
	{
		if (*v18 == v8)
			break;
		++v17;
		v18 += 2;
	} while (v17 < 4);
	if (v17 != 4)
		goto LABEL_42;
	v19 = 1;
	v20 = 0i64;
	v21 = a1 + 496;
	while (2)
	{
		if (v7 && *(_DWORD*)v21 == v7 && v19)
		{
			v19 = 0;
			goto LABEL_38;
		}
		if (*(_DWORD*)v21)
		{
			if (v12 == -1 || *(float*)(a1 + 8 * v12 + 500) > *(float*)(v21 + 4))
				v12 = v20;
		LABEL_38:
			++v20;
			v21 += 8i64;
			if (v20 >= 4)
				goto LABEL_41;
			continue;
		}
		break;
	}
	v12 = v20;
LABEL_41:
	*(_DWORD*)(a1 + 8 * v12 + 496) = v8;
	*(_DWORD*)(a1 + 8 * v12 + 500) = 0;
LABEL_42:
	v22 = 4i64;
	v23 = (float*)(a1 + 500);
	v24 = 4i64;
	while (2)
	{
		v25 = *((_DWORD*)v23 - 1);
		if (!v25)
		{
		LABEL_60:
			*v23 = 0.0;
			goto LABEL_61;
		}
		v26 = *v23;
		if (v25 == v7)
		{
			v27 = *(float*)(a1 + 540);
			v28 = v26 <= v27;
			if (v26 < v27)
			{
				v29 = v26 + a2;
				*v23 = v29;
				if (v29 > v27)
					*v23 = v27;
				goto LABEL_61;
			}
		LABEL_52:
			if (!v28)
			{
				v31 = v26 - a2;
				*v23 = v31;
				if (v31 < v27)
					*v23 = v27;
			}
			goto LABEL_61;
		}
		if (v25 != v8)
		{
			if (v26 >= 0.0)
			{
				if (v26 <= 0.0)
					goto LABEL_61;
				v33 = v26 - a2;
				*v23 = v33;
				if (v33 >= 0.0)
					goto LABEL_61;
			}
			else
			{
				v32 = v26 + a2;
				*v23 = v32;
				if (v32 <= 0.0)
					goto LABEL_61;
			}
			goto LABEL_60;
		}
		v27 = *(float*)(a1 + 548);
		v28 = v26 <= v27;
		if (v26 >= v27)
			goto LABEL_52;
		v30 = v26 + a2;
		*v23 = v30;
		if (v30 > v27)
			*v23 = v27;
	LABEL_61:
		v23 += 2;
		if (--v24)
			continue;
		break;
	}
	if (*(float*)(a1 + 500) == 0.0)
		*v9 = 0;
	if (*(float*)(a1 + 508) == 0.0)
		*(_DWORD*)(a1 + 504) = 0;
	if (*(float*)(a1 + 516) == 0.0)
		*(_DWORD*)(a1 + 512) = 0;
	if (*(float*)(a1 + 524) == 0.0)
		*(_DWORD*)(a1 + 520) = 0;
	v34 = 1i64;
	v35 = (_QWORD*)(a1 + 496);
	do
	{
		if (!*(_DWORD*)v35)
		{
			v36 = v34;
			if (v34 < 4)
			{
				v37 = v35 + 1;
				while (!*v37)
				{
					++v36;
					v37 += 2;
					if (v36 >= 4)
						goto LABEL_78;
				}
				v38 = *(_QWORD*)(a1 + 8 * v36 + 496);
				*(_QWORD*)(a1 + 8 * v36 + 496) = *v35;
				*v35 = v38;
			}
		}
	LABEL_78:
		++v35;
		++v34;
		--v22;
	} while (v22);
	v39 = 0i64;
	v40 = (_DWORD*)(a1 + 496);
	do
	{
		if (!*v40)
			break;
		++v39;
		v40 += 2;
	} while (v39 < 4);
	v87[0] = a1 + 496;
	v87[1] = v39;
	(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, _QWORD*), __int64*, unsigned __int64))(*(_QWORD*)qword_140C65848 + 144i64))(
		qword_140C65848,
		sub_1400BA9B0,
		v87,
		v34);
	v41 = (float*)(a1 + 532);
	v42 = *(float*)(a1 + 556);
	v43 = *(float*)(a1 + 532);
	if (v43 >= v42)
	{
		if (v43 > v42)
		{
			v45 = v43 - a2;
			*v41 = v45;
			if (v45 < v42)
				LABEL_87:
			*v41 = v42;
		}
	}
	else
	{
		v44 = v43 + a2;
		*v41 = v44;
		if (v44 > v42)
			goto LABEL_87;
	}
	(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64), __int64))(*(_QWORD*)qword_140C65848 + 144i64))(
		qword_140C65848,
		sub_1400BA9D0,
		a1 + 532);
	v46 = 64i64;
	if ((dword_140C8D658 & 1) == 0)
	{
		dword_140C8D658 |= 1u;
		CurrentThreadId = GetCurrentThreadId();
		if ((_DWORD)qword_140C77840 == CurrentThreadId)
		{
			++qword_140C77848;
		}
		else
		{
			v48 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C77848, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v48 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C77840, CurrentThreadId);
					goto LABEL_96;
				}
			}
			LODWORD(qword_140C77840) = CurrentThreadId;
		}
	LABEL_96:
		v49 = qword_140C63768;
		v50 = &unk_140C8D6F0;
		qword_140C63768 = (__int64)&unk_140C8D660;
		dword_140C8D6EC = 97;
		qword_140C8D6E4 = 0i64;
		qword_140C8D770 = v49;
		v51 = 64i64;
		while (v51 != -2147483582)
		{
			v52 = *(_WORD*)((char*)v50 + (char*)L"Dry val" - (char*)&unk_140C8D6F0);
			if (!v52)
				break;
			*v50++ = v52;
			if (!--v51)
			{
				--v50;
				break;
			}
		}
		v53 = qword_140C77848;
		*v50 = 0;
		dword_140C8D6E0 = 1;
		if (v53 <= 1)
		{
			LODWORD(qword_140C77840) = 0;
			_InterlockedExchange64(&qword_140C77848, 0i64);
			if (qword_140C77850)
			{
				if (!qword_140C77858)
				{
					EventW = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C77858, (signed __int64)EventW, 0i64))
						CloseHandle(EventW);
				}
				SetEvent(qword_140C77858);
			}
		}
		else
		{
			--qword_140C77848;
		}
	}
	sub_1401AD8F0((__int64)&unk_140C8D660, *v41);
	if ((dword_140C8D658 & 2) == 0)
	{
		dword_140C8D658 |= 2u;
		sub_1401AD620((__int64)&unk_140C8D780, L"Wet Id 1");
	}
	sub_1401ADA40((__int64)&unk_140C8D780, *v9);
	if ((dword_140C8D658 & 4) == 0)
	{
		dword_140C8D658 |= 4u;
		v55 = GetCurrentThreadId();
		if ((_DWORD)qword_140C77840 == v55)
		{
			++qword_140C77848;
		}
		else
		{
			v56 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C77848, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v56 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C77840, v55);
					goto LABEL_118;
				}
			}
			LODWORD(qword_140C77840) = v55;
		}
	LABEL_118:
		v57 = qword_140C63768;
		v58 = &unk_140C8D930;
		qword_140C63768 = (__int64)&unk_140C8D8A0;
		dword_140C8D92C = 97;
		qword_140C8D924 = 0i64;
		qword_140C8D9B0 = v57;
		v59 = 64i64;
		while (v59 != -2147483582)
		{
			v60 = *(_WORD*)((char*)v58 + (char*)L"Wet val 1" - (char*)&unk_140C8D930);
			if (!v60)
				break;
			*v58++ = v60;
			if (!--v59)
			{
				--v58;
				break;
			}
		}
		v61 = qword_140C77848;
		*v58 = 0;
		dword_140C8D920 = 1;
		if (v61 <= 1)
		{
			LODWORD(qword_140C77840) = 0;
			_InterlockedExchange64(&qword_140C77848, 0i64);
			if (qword_140C77850)
			{
				if (!qword_140C77858)
				{
					v62 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C77858, (signed __int64)v62, 0i64))
						CloseHandle(v62);
				}
				SetEvent(qword_140C77858);
			}
		}
		else
		{
			--qword_140C77848;
		}
	}
	sub_1401AD8F0((__int64)&unk_140C8D8A0, *(float*)(a1 + 500));
	if ((dword_140C8D658 & 8) == 0)
	{
		dword_140C8D658 |= 8u;
		sub_1401AD620((__int64)&unk_140C8D9C0, L"Wet Id 2");
	}
	sub_1401ADA40((__int64)&unk_140C8D9C0, *(_DWORD*)(a1 + 504));
	if ((dword_140C8D658 & 0x10) == 0)
	{
		dword_140C8D658 |= 0x10u;
		v63 = GetCurrentThreadId();
		if ((_DWORD)qword_140C77840 == v63)
		{
			++qword_140C77848;
		}
		else
		{
			v64 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C77848, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v64 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C77840, v63);
					goto LABEL_140;
				}
			}
			LODWORD(qword_140C77840) = v63;
		}
	LABEL_140:
		v65 = qword_140C63768;
		v66 = &unk_140C8DB70;
		qword_140C63768 = (__int64)&unk_140C8DAE0;
		dword_140C8DB6C = 97;
		qword_140C8DB64 = 0i64;
		qword_140C8DBF0 = v65;
		v67 = 64i64;
		while (v67 != -2147483582)
		{
			v68 = *(_WORD*)((char*)v66 + (char*)L"Wet val 2" - (char*)&unk_140C8DB70);
			if (!v68)
				break;
			*v66++ = v68;
			if (!--v67)
			{
				--v66;
				break;
			}
		}
		v69 = qword_140C77848;
		*v66 = 0;
		dword_140C8DB60 = 1;
		if (v69 <= 1)
		{
			LODWORD(qword_140C77840) = 0;
			_InterlockedExchange64(&qword_140C77848, 0i64);
			if (qword_140C77850)
			{
				if (!qword_140C77858)
				{
					v70 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C77858, (signed __int64)v70, 0i64))
						CloseHandle(v70);
				}
				SetEvent(qword_140C77858);
			}
		}
		else
		{
			--qword_140C77848;
		}
	}
	sub_1401AD8F0((__int64)&unk_140C8DAE0, *(float*)(a1 + 508));
	if ((dword_140C8D658 & 0x20) == 0)
	{
		dword_140C8D658 |= 0x20u;
		sub_1401AD620((__int64)&unk_140C8DC00, L"Wet Id 3");
	}
	sub_1401ADA40((__int64)&unk_140C8DC00, *(_DWORD*)(a1 + 512));
	if ((dword_140C8D658 & 0x40) == 0)
	{
		dword_140C8D658 |= 0x40u;
		v71 = GetCurrentThreadId();
		if ((_DWORD)qword_140C77840 == v71)
		{
			++qword_140C77848;
		}
		else
		{
			v72 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C77848, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v72 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C77840, v71);
					goto LABEL_162;
				}
			}
			LODWORD(qword_140C77840) = v71;
		}
	LABEL_162:
		v73 = qword_140C63768;
		v74 = &unk_140C8DDB0;
		qword_140C63768 = (__int64)&unk_140C8DD20;
		dword_140C8DDAC = 97;
		qword_140C8DDA4 = 0i64;
		qword_140C8DE30 = v73;
		v75 = 64i64;
		while (v75 != -2147483582)
		{
			v76 = *(_WORD*)((char*)v74 + (char*)L"Wet val 3" - (char*)&unk_140C8DDB0);
			if (!v76)
				break;
			*v74++ = v76;
			if (!--v75)
			{
				--v74;
				break;
			}
		}
		v77 = qword_140C77848;
		*v74 = 0;
		dword_140C8DDA0 = 1;
		if (v77 <= 1)
		{
			LODWORD(qword_140C77840) = 0;
			_InterlockedExchange64(&qword_140C77848, 0i64);
			if (qword_140C77850)
			{
				if (!qword_140C77858)
				{
					v78 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C77858, (signed __int64)v78, 0i64))
						CloseHandle(v78);
				}
				SetEvent(qword_140C77858);
			}
		}
		else
		{
			--qword_140C77848;
		}
	}
	sub_1401AD8F0((__int64)&unk_140C8DD20, *(float*)(a1 + 516));
	if ((dword_140C8D658 & 0x80u) == 0)
	{
		dword_140C8D658 |= 0x80u;
		sub_1401AD620((__int64)&unk_140C8DE40, L"Wet Id 4");
	}
	sub_1401ADA40((__int64)&unk_140C8DE40, *(_DWORD*)(a1 + 520));
	if ((dword_140C8D658 & 0x100) == 0)
	{
		dword_140C8D658 |= 0x100u;
		v79 = GetCurrentThreadId();
		if ((_DWORD)qword_140C77840 == v79)
		{
			++qword_140C77848;
		}
		else
		{
			v80 = 0i64;
			while (_InterlockedCompareExchange64(&qword_140C77848, 1i64, 0i64))
			{
				_mm_pause();
				if ((unsigned __int64)++v80 >= 0x400)
				{
					sub_14019FB60((__int64)&qword_140C77840, v79);
					goto LABEL_184;
				}
			}
			LODWORD(qword_140C77840) = v79;
		}
	LABEL_184:
		v81 = qword_140C63768;
		v82 = &unk_140C8DFF0;
		qword_140C63768 = (__int64)&unk_140C8DF60;
		dword_140C8DFEC = 97;
		qword_140C8DFE4 = 0i64;
		qword_140C8E070 = v81;
		while (v46 != -2147483582)
		{
			v83 = *(_WORD*)((char*)v82 + (char*)L"Wet val 4" - (char*)&unk_140C8DFF0);
			if (!v83)
				break;
			*v82++ = v83;
			if (!--v46)
			{
				--v82;
				break;
			}
		}
		v84 = qword_140C77848;
		*v82 = 0;
		dword_140C8DFE0 = 1;
		if (v84 <= 1)
		{
			LODWORD(qword_140C77840) = 0;
			_InterlockedExchange64(&qword_140C77848, 0i64);
			if (qword_140C77850)
			{
				if (!qword_140C77858)
				{
					v85 = CreateEventW(0i64, 0, 0, 0i64);
					if (_InterlockedCompareExchange64((volatile signed __int64*)&qword_140C77858, (signed __int64)v85, 0i64))
						CloseHandle(v85);
				}
				SetEvent(qword_140C77858);
			}
		}
		else
		{
			--qword_140C77848;
		}
	}
	LODWORD(v2) = sub_1401AD8F0((__int64)&unk_140C8DF60, *(float*)(a1 + 524));
	return (int)v2;
}
// 1400BCCD7: conditional instruction was optimized away because rdx.8!=0
// 1400BCE77: conditional instruction was optimized away because rdx.8!=0
// 1400BD017: conditional instruction was optimized away because rdx.8!=0
// 1400BD1B7: conditional instruction was optimized away because rdx.8!=0
// 1400BD356: conditional instruction was optimized away because rsi.8!=0
// 140A14320: using guessed type wchar_t aWetVal1[10];
// 140A14338: using guessed type wchar_t aWetId1[9];
// 140A14350: using guessed type wchar_t aDryVal[8];
// 140A14390: using guessed type wchar_t aWetVal3[10];
// 140A143A8: using guessed type wchar_t aWetId3[9];
// 140A143C0: using guessed type wchar_t aWetVal2[10];
// 140A143D8: using guessed type wchar_t aWetId2[9];
// 140A143F0: using guessed type wchar_t aWetVal4[10];
// 140A14408: using guessed type wchar_t aWetId4[9];
// 140C63768: using guessed type __int64 qword_140C63768;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C77840: using guessed type __int64 qword_140C77840;
// 140C77848: using guessed type __int64 qword_140C77848;
// 140C77850: using guessed type __int64 qword_140C77850;
// 140C8D658: using guessed type int dword_140C8D658;
// 140C8D6E0: using guessed type int dword_140C8D6E0;
// 140C8D6E4: using guessed type __int64 qword_140C8D6E4;
// 140C8D6EC: using guessed type int dword_140C8D6EC;
// 140C8D770: using guessed type __int64 qword_140C8D770;
// 140C8D920: using guessed type int dword_140C8D920;
// 140C8D924: using guessed type __int64 qword_140C8D924;
// 140C8D92C: using guessed type int dword_140C8D92C;
// 140C8D9B0: using guessed type __int64 qword_140C8D9B0;
// 140C8DB60: using guessed type int dword_140C8DB60;
// 140C8DB64: using guessed type __int64 qword_140C8DB64;
// 140C8DB6C: using guessed type int dword_140C8DB6C;
// 140C8DBF0: using guessed type __int64 qword_140C8DBF0;
// 140C8DDA0: using guessed type int dword_140C8DDA0;
// 140C8DDA4: using guessed type __int64 qword_140C8DDA4;
// 140C8DDAC: using guessed type int dword_140C8DDAC;
// 140C8DE30: using guessed type __int64 qword_140C8DE30;
// 140C8DFE0: using guessed type int dword_140C8DFE0;
// 140C8DFE4: using guessed type __int64 qword_140C8DFE4;
// 140C8DFEC: using guessed type int dword_140C8DFEC;
// 140C8E070: using guessed type __int64 qword_140C8E070;

