//----- (000000014075E100) ----------------------------------------------------
__int64 __fastcall sub_14075E100(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rdi
	__int64 result; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rcx
	int v12; // r11d
	__int64* v13; // rax
	_QWORD* v14; // rax
	int v15; // r11d
	__int64 v16; // r8
	__int64 v17; // rdx
	__int64* v18; // rbp
	__int64* v19; // rsi
	__int64 v20; // r14
	__int64 v21; // rbx
	__int64 v22; // rax
	_QWORD* v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rdx
	int v26; // r11d
	__int64 v27; // rcx
	_QWORD* v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rdx
	unsigned __int16* v31; // r11
	__int64 v32; // rdx
	_QWORD* v33; // rax
	__int64 v34; // rcx
	__int64(__fastcall * *v35)(); // [rsp+20h] [rbp-28h] BYREF
	int v36; // [rsp+28h] [rbp-20h]
	__int64 v37; // [rsp+30h] [rbp-18h]
	int v38; // [rsp+38h] [rbp-10h]

	v3 = (__int64)a1;
	result = sub_140056D60(a1, 1u);
	v5 = (unsigned int)result;
	if ((_DWORD)result)
	{
		v6 = *(_QWORD*)(v3 + 32);
		v35 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v37 = v3;
		v38 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(v3);
		v8 = *(_QWORD*)(v3 + 16);
		v9 = sub_14005C1B0(v3, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v3 + 16) += 16i64;
		v10 = sub_1400578C0(v3);
		v11 = *(_QWORD*)(a2 + 144);
		v12 = v10;
		v36 = v10;
		v13 = *(__int64**)(*(_QWORD*)(a2 + 136) + 8 * (v5 % ((v11 - *(_QWORD*)(a2 + 136)) >> 3)));
		if (!v13)
			goto LABEL_7;
		while (*((_DWORD*)v13 + 2) != (_DWORD)v5)
		{
			v13 = (__int64*)*v13;
			if (!v13)
				goto LABEL_7;
		}
		v18 = v13 + 2;
		if (v13 == (__int64*)-16i64)
		{
		LABEL_7:
			v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v12);
			v16 = *(_QWORD*)(v3 + 16);
			*(_QWORD*)v16 = *v14;
			v17 = *((unsigned int*)v14 + 2);
			*(_DWORD*)(v16 + 8) = v17;
		}
		else
		{
			v19 = (__int64*)v13[3];
			if (v19 != (__int64*)v13[4])
			{
				do
				{
					v20 = *v19;
					if (*(_QWORD*)(*(_QWORD*)(v3 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v3 + 32) + 112i64))
						sub_14005E2C0(v3);
					v21 = *(_QWORD*)(v3 + 16);
					v22 = sub_14005C1B0(v3, 0, 0);
					*(_DWORD*)(v21 + 8) = 5;
					*(_QWORD*)v21 = v22;
					*(_QWORD*)(v3 + 16) += 16i64;
					LODWORD(v21) = sub_1400578C0(v3);
					v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v21);
					v24 = *(_QWORD*)(v3 + 16);
					*(_QWORD*)v24 = *v23;
					*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
					*(_QWORD*)(v3 + 16) += 16i64;
					sub_1400F06F0(v3, v25, L"nId", v26);
					*(_QWORD*)(v3 + 16) -= 16i64;
					sub_14034BDD0(v27, *(_DWORD*)(v20 + 4));
					v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v21);
					v29 = *(_QWORD*)(v3 + 16);
					*(_QWORD*)v29 = *v28;
					*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
					*(_QWORD*)(v3 + 16) += 16i64;
					sub_1400F0870(v3, v30, L"strName", v31);
					*(_QWORD*)(v3 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v35);
					sub_1400579E0(v3, v32, v21);
					++v19;
				} while (v19 != (__int64*)v18[2]);
				v3 = v37;
				v12 = v36;
			}
			v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v12);
			v34 = *(_QWORD*)(v3 + 16);
			*(_QWORD*)v34 = *v33;
			*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
		}
		*(_QWORD*)(v3 + 16) += 16i64;
		sub_1400579E0(v3, v17, v15);
		return 1i64;
	}
	return result;
}
// 14075E220: conditional instruction was optimized away because rax.8!=0
// 14075E1FE: variable 'v17' is possibly undefined
// 14075E1FE: variable 'v15' is possibly undefined
// 14075E2BE: variable 'v25' is possibly undefined
// 14075E2BE: variable 'v26' is possibly undefined
// 14075E2CC: variable 'v27' is possibly undefined
// 14075E30C: variable 'v30' is possibly undefined
// 14075E30C: variable 'v31' is possibly undefined
// 14075E328: variable 'v32' is possibly undefined
// 140B4CB40: using guessed type wchar_t aStrname_107[8];
// 140B4CB50: using guessed type wchar_t aNid_41[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

