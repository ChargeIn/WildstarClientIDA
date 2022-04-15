//----- (0000000140005730) ----------------------------------------------------
__int64 __fastcall sub_140005730(__int64 a1, int* a2)
{
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 v6; // r9
	__int64 v7; // rcx
	unsigned __int64 v8; // r9
	__int64 v9; // rdx
	unsigned int v10; // ebx
	__int64 v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // r8
	__int64 v14; // rcx
	__int64 v15; // rax
	unsigned int v16; // edx
	__int64 v17; // rax
	int v18; // r9d
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rax
	int v22; // r9d
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rax
	int v26; // r9d
	__int64 v28; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v29; // [rsp+50h] [rbp-B8h]
	void(__fastcall * v30)(__int64); // [rsp+58h] [rbp-B0h]
	__int64 v31; // [rsp+60h] [rbp-A8h]
	__int128 v32; // [rsp+68h] [rbp-A0h]
	__int64 v33; // [rsp+78h] [rbp-90h]
	__int128 v34; // [rsp+80h] [rbp-88h]
	__int64 v35; // [rsp+90h] [rbp-78h]
	unsigned int v36; // [rsp+98h] [rbp-70h] BYREF
	__int64 v37[96]; // [rsp+A0h] [rbp-68h] BYREF
	__int64 v38; // [rsp+3A0h] [rbp+298h]
	__int64 v39; // [rsp+560h] [rbp+458h]
	__int128 v40; // [rsp+568h] [rbp+460h]
	__int64 v41; // [rsp+578h] [rbp+470h]
	__int64 v42; // [rsp+580h] [rbp+478h]
	__int64 v43; // [rsp+588h] [rbp+480h]
	void(__fastcall * v44)(__int64); // [rsp+590h] [rbp+488h]
	__int128 v45; // [rsp+598h] [rbp+490h]
	__int64 v46; // [rsp+5A8h] [rbp+4A0h]

	v3 = a1 + 8i64 * *a2;
	v4 = *((_QWORD*)a2 + 1);
	v5 = *(_QWORD*)(v3 + 208);
	*(_QWORD*)(v3 + 208) = v4;
	v6 = *((_QWORD*)a2 + 1);
	if (v5 == v6)
		return 0i64;
	v7 = qword_140C65898;
	if (qword_140C65898)
	{
		if (v6 <= v5)
		{
		LABEL_21:
			v17 = *(_QWORD*)(v7 + 29504) + 4264i64;
			if (!*(_QWORD*)(*(_QWORD*)(v7 + 29504) + 4344i64))
			{
				v18 = *(_DWORD*)(*(_QWORD*)(v7 + 29504) + 4320i64);
				v19 = *(_QWORD*)(v7 + 29504) + 4328i64;
				LODWORD(v28) = 0;
				v29 = v17;
				v30 = sub_1400A8020;
				v31 = 0i64;
				sub_140195960(v19, 0, (__int64)&v28, v18);
				v7 = qword_140C65898;
			}
			v20 = *(_QWORD*)(v7 + 32736);
			if (v20)
			{
				v21 = v20 + 104;
				if (!*(_QWORD*)(v21 + 80))
				{
					v22 = *(_DWORD*)(v21 + 56);
					LODWORD(v28) = 0;
					v29 = v21;
					v30 = sub_1400A8020;
					v31 = 0i64;
					sub_140195960(v21 + 64, 0, (__int64)&v28, v22);
				}
			}
			goto LABEL_26;
		}
		v8 = v6 - v5;
		v9 = *((_QWORD*)a2 + 3);
		v10 = *a2;
		v11 = *((_QWORD*)a2 + 2);
		*(_QWORD*)&v34 = v8;
		*((_QWORD*)&v34 + 1) = 15i64;
		LODWORD(v35) = 0;
		HIDWORD(v35) = v10;
		v29 = 15i64;
		LODWORD(v30) = 0;
		HIDWORD(v30) = v10;
		*((_QWORD*)&v32 + 1) = 15i64;
		LODWORD(v33) = 0;
		*(_QWORD*)&v32 = sub_1403AC0E0(qword_140C65898 + 7160, v11 + v9, v10, v8, v11 + v9);
		HIDWORD(v33) = v10;
		v36 = 2;
		sub_14040FAE0((__int64)v37);
		v12 = *(_QWORD*)(qword_140C65898 + 29504);
		v43 = 15i64;
		v40 = v34;
		v41 = v35;
		v45 = v32;
		v39 = 0i64;
		v46 = v33;
		v42 = v11;
		v44 = v30;
		sub_140427FA0(v12, &v36);
		if (v37[0])
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v37[0] + 8i64))(v37[0]);
		if (v38)
			sub_14018B900(v38, 0);
		v14 = qword_140C658D8;
		if (qword_140C658D8 && *a2 == 5)
			sub_140437A10((_QWORD*)qword_140C658D8, 0x18Bu, 0, 0i64, 0, 0, 1);
		if (*a2 != 6)
		{
		LABEL_20:
			v7 = qword_140C65898;
			goto LABEL_21;
		}
		if ((dword_140C8B190 & 1) != 0)
		{
			if (dword_140C8B19C)
			{
				v16 = dword_140C8B198;
			LABEL_19:
				sub_14043B7B0(v14, v16, v13, 0);
				goto LABEL_20;
			}
		}
		else
		{
			dword_140C8B190 |= 1u;
		}
		dword_140C8B19C = 1;
		v15 = sub_140200220(0x53Fu);
		if (v15)
		{
			v16 = *(_DWORD*)(v15 + 4);
			dword_140C8B198 = v16;
		}
		else
		{
			v16 = 0;
			dword_140C8B198 = 0;
		}
		goto LABEL_19;
	}
LABEL_26:
	v23 = qword_140C66DA8;
	v24 = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(v24 + 368) == 5)
		{
			v24 = *(_QWORD*)(v24 + 176);
			if (!v24)
				return 0i64;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v23 + 368) != 5)
					break;
				v23 = *(_QWORD*)(v23 + 176);
			} while (v23);
		}
		v25 = v23 + 584;
		if (!*(_QWORD*)(v25 + 80))
		{
			v26 = *(_DWORD*)(v25 + 56);
			LODWORD(v28) = 0;
			v29 = v25;
			v30 = sub_1400A8020;
			v31 = 0i64;
			sub_140195960(v25 + 64, 0, (__int64)&v28, v26);
		}
	}
	return 0i64;
}
// 140005951: variable 'v14' is possibly undefined
// 140005951: variable 'v13' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;
// 140C8B190: using guessed type int dword_140C8B190;
// 140C8B198: using guessed type int dword_140C8B198;
// 140C8B19C: using guessed type int dword_140C8B19C;
// 140005730: using guessed type __int64 var_548[96];

