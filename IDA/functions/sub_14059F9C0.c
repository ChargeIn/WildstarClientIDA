//----- (000000014059F9C0) ----------------------------------------------------
void __fastcall sub_14059F9C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v6; // rsi
	__int64 v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	int v11; // r11d
	__int64 v12; // rdi
	__int64 v13; // rcx
	__int64 v14; // rbx
	__int64 v15; // rax
	unsigned int v16; // r12d
	_DWORD* v17; // r14
	__int64 v18; // rdi
	__int64 v19; // rcx
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // eax
	__int64 v23; // rcx
	int v24; // r15d
	float v25; // xmm6_4
	_QWORD* v26; // rax
	__int64 v27; // rdx
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	__int64 v30; // rax
	__int64* v31; // rax
	_QWORD* v32; // rax
	__int64 v33; // r10
	__int64 v34; // rdx
	int v35; // r11d
	__int64 v36; // rsi
	__int64 v37; // rcx
	__int64 v38; // rbx
	__int64 v39; // rax
	int v40; // ebx
	__int64 v41; // rsi
	int v42; // ebx
	__int64 v43; // rdx
	_QWORD* v44; // rax
	__int64 v45; // r11
	__int64 v46; // rdx
	int v47; // r10d
	__int64 v48; // rdx
	int v49; // esi
	__int64 v50; // rdx
	__int64 v51; // rax
	float v52; // xmm3_4
	float v53; // xmm0_4
	_QWORD* v54; // rdi
	_QWORD* v55; // rax
	__int64 v56; // rbx
	__int64 v57; // rax
	__int64 v58; // r9
	__int64 v59; // [rsp+30h] [rbp-69h] BYREF
	__int64 v60; // [rsp+38h] [rbp-61h]
	__int64 v61; // [rsp+40h] [rbp-59h]
	__int64(__fastcall * *v62)(); // [rsp+48h] [rbp-51h] BYREF
	__int64 v63; // [rsp+50h] [rbp-49h]
	__int64 v64; // [rsp+58h] [rbp-41h]
	int v65; // [rsp+60h] [rbp-39h]
	__int64(__fastcall * *v66)(); // [rsp+68h] [rbp-31h] BYREF
	int v67; // [rsp+70h] [rbp-29h]
	__int64 v68; // [rsp+78h] [rbp-21h]
	int v69; // [rsp+80h] [rbp-19h]
	__int64(__fastcall * *v70)(); // [rsp+88h] [rbp-11h] BYREF
	int v71; // [rsp+90h] [rbp-9h]
	__int64 v72; // [rsp+98h] [rbp-1h]
	int v73; // [rsp+A0h] [rbp+7h]

	v6 = sub_14020AC20(*(_DWORD*)(a4 + 364));
	v7 = sub_14020A7E0(*(_DWORD*)(a4 + 360));
	v59 = v7;
	if (v6 && v7)
	{
		v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v10 = *(_QWORD*)(v9 + 16);
		*(_QWORD*)v10 = *v8;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
		*(_QWORD*)(v9 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a1 + 16), v10, L"nPowerCoreMaximumLevel", v11);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v12 = *(_QWORD*)(a1 + 16);
		v66 = off_140B569F0;
		v13 = *(_QWORD*)(v12 + 32);
		v68 = v12;
		v69 = 1;
		if (*(_QWORD*)(v13 + 120) >= *(_QWORD*)(v13 + 112))
			sub_14005E2C0(v12);
		v14 = *(_QWORD*)(v12 + 16);
		v15 = sub_14005C1B0(v12, 0, 0);
		*(_DWORD*)(v14 + 8) = 5;
		*(_QWORD*)v14 = v15;
		*(_QWORD*)(v12 + 16) += 16i64;
		v16 = 0;
		v59 -= v6;
		v67 = sub_1400578C0(v12);
		v17 = (_DWORD*)(v6 + 4);
		do
		{
			if (!*v17)
				break;
			v18 = *(_QWORD*)(a1 + 16);
			v70 = off_140B569F0;
			v73 = 1;
			v19 = *(_QWORD*)(v18 + 32);
			v72 = v18;
			if (*(_QWORD*)(v19 + 120) >= *(_QWORD*)(v19 + 112))
				sub_14005E2C0(v18);
			v20 = *(_QWORD*)(v18 + 16);
			v21 = sub_14005C1B0(v18, 0, 0);
			*(_DWORD*)(v20 + 8) = 5;
			*(_QWORD*)v20 = v21;
			*(_QWORD*)(v18 + 16) += 16i64;
			v22 = sub_1400578C0(v18);
			v23 = *(_QWORD*)(v18 + 32);
			v24 = v22;
			v71 = v22;
			v25 = *(float*)((char*)v17 + v59);
			v26 = sub_14005C3C0(*(_QWORD*)(v23 + 160), v22);
			v27 = *(_QWORD*)(v18 + 16);
			*(_QWORD*)v27 = *v26;
			*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
			*(_QWORD*)(v18 + 16) += 16i64;
			v28 = (unsigned __int64*)sub_14018F0E0(&v62, L"nRatio")[1];
			if (v28)
			{
				v29 = -1i64;
				do
					++v29;
				while (*((_BYTE*)v28 + v29));
				sub_140058710(v18, v28, v29);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v18 + 16) + 8i64) = 0;
				*(_QWORD*)(v18 + 16) += 16i64;
			}
			if (v63)
				sub_14018B900(v63, 0);
			v30 = *(_QWORD*)(v18 + 16);
			*(_DWORD*)(v30 + 8) = 3;
			*(double*)v30 = v25;
			*(_QWORD*)(v18 + 16) += 16i64;
			v31 = (__int64*)sub_1400580E0(v18, -3);
			sub_14005EA50(v18, v31, (int*)(*(_QWORD*)(v18 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v18 + 16) - 16i64));
			*(_QWORD*)(v18 + 16) -= 48i64;
			v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v24);
			*(_QWORD*)v33 = *v32;
			*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
			*(_QWORD*)(v18 + 16) += 16i64;
			sub_1400F06F0(v18, v34, L"eItemStatType", v35);
			*(_QWORD*)(v18 + 16) -= 16i64;
			if (*v17 == 1)
			{
				v44 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v24);
				*(_QWORD*)v45 = *v44;
				*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
				*(_QWORD*)(v18 + 16) += 16i64;
				sub_1400F06F0(v18, v46, L"eProperty", v47);
				*(_QWORD*)(v18 + 16) -= 16i64;
			}
			else if (*v17 == 4)
			{
				v36 = *(_QWORD*)(a1 + 16);
				v65 = 1;
				v37 = *(_QWORD*)(v36 + 32);
				v62 = off_140B569F0;
				v64 = v36;
				if (*(_QWORD*)(v37 + 120) >= *(_QWORD*)(v37 + 112))
					sub_14005E2C0(v36);
				v38 = *(_QWORD*)(v36 + 16);
				v39 = sub_14005C1B0(v36, 0, 0);
				*(_DWORD*)(v38 + 8) = 5;
				*(_QWORD*)v38 = v39;
				*(_QWORD*)(v36 + 16) += 16i64;
				v40 = 1;
				LODWORD(v63) = sub_1400578C0(v36);
				v41 = 7i64;
				do
				{
					if ((v40 & v17[5]) != 0)
						sub_1400FA9E0((__int64)&v62);
					v40 = __ROL4__(v40, 1);
					--v41;
				} while (v41);
				v42 = v63;
				sub_1400FB2A0((__int64)&v70, (__int64)L"arCraftingGroups", v63);
				if (v64)
					sub_1400579E0(v64, v43, v42);
			}
			sub_1400FB1D0((__int64)&v66);
			sub_1400579E0(v18, v48, v24);
			++v16;
			++v17;
		} while (v16 < 5);
		v49 = v67;
		sub_1400FB2A0(a1, (__int64)L"arStats", v67);
		if (*(_DWORD*)(a3 + 28) || (*(_BYTE*)(a3 + 32) & 4) == 0)
		{
			if (dword_140C7DF84)
			{
				v52 = *(float*)&dword_140C7DF80;
			}
			else
			{
				dword_140C7DF84 = 1;
				v51 = sub_140200220(0x4E9u);
				if (v51)
				{
					v52 = *(float*)(v51 + 24);
					dword_140C7DF80 = LODWORD(v52);
				}
				else
				{
					v52 = 0.0;
					dword_140C7DF80 = 0;
				}
			}
			v53 = (float)(sub_1405E6140(qword_140C65898 + 5784, 22, *(_DWORD*)(a3 + 8), *(_DWORD*)(a4 + 324)).m128_f32[0]
				* v52)
				* (float)(int)*(_QWORD*)(a4 + 144);
			if ((int)v53)
			{
				v54 = *(_QWORD**)(a1 + 16);
				v60 = 1i64;
				v61 = 0i64;
				v55 = (_QWORD*)sub_140059170(v54, 0x18ui64);
				*v55 = (unsigned int)(int)v53;
				v55[1] = 1i64;
				v55[2] = v61;
				v56 = v54[4];
				v57 = sub_140062650((__int64)v54, (unsigned __int64*)"Game.Money", 0xAui64);
				v58 = v54[2];
				v59 = v57;
				LODWORD(v60) = 4;
				sub_14005E8E0((__int64)v54, v56 + 160, (int*)&v59, v58);
				v54[2] += 16i64;
				sub_140058BF0((__int64)v54, -2);
				sub_1400FB540(a1);
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
			}
		}
		if (v68)
			sub_1400579E0(v68, v50, v49);
	}
}
// 14059FA4F: variable 'v9' is possibly undefined
// 14059FA72: variable 'v11' is possibly undefined
// 14059FC3D: variable 'v33' is possibly undefined
// 14059FC4F: variable 'v34' is possibly undefined
// 14059FC4F: variable 'v35' is possibly undefined
// 14059FD0E: variable 'v43' is possibly undefined
// 14059FD39: variable 'v45' is possibly undefined
// 14059FD4B: variable 'v46' is possibly undefined
// 14059FD4B: variable 'v47' is possibly undefined
// 14059FD67: variable 'v48' is possibly undefined
// 14059FF05: variable 'v50' is possibly undefined
// 140B20100: using guessed type wchar_t aEproperty_0[10];
// 140B20118: using guessed type wchar_t aEitemstattype[14];
// 140B20138: using guessed type wchar_t aArstats_0[8];
// 140B20148: using guessed type wchar_t aArcraftinggrou[17];
// 140B20198: using guessed type wchar_t aNratio[7];
// 140B201A8: using guessed type wchar_t aNpowercoremaxi[23];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DF80: using guessed type int dword_140C7DF80;
// 140C7DF84: using guessed type int dword_140C7DF84;

