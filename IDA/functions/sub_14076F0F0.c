//----- (000000014076F0F0) ----------------------------------------------------
__int64 __fastcall sub_14076F0F0(__int64 a1, __int64 a2)
{
	bool v2; // zf
	__int64 v4; // rbp
	__int64 v5; // rcx
	int* v7; // rsi
	unsigned __int64 v8; // rdi
	int* v9; // r13
	unsigned __int64 v10; // r15
	int* v11; // rbx
	__int64 v12; // rdi
	int* v13; // r14
	__int64 v14; // rbp
	int* v15; // rbx
	int v16; // esi
	unsigned __int64 v17; // rbx
	__int64 v18; // rdi
	unsigned int v19; // ecx
	unsigned __int64 v20; // rax
	unsigned __int64 v21; // rdi
	__int64* v22; // rax
	int* v23; // r14
	unsigned __int64 v24; // r15
	int v25; // ebp
	int v26; // r12d
	int v27; // esi
	unsigned __int64 v28; // rdx
	unsigned int v29; // r11d
	unsigned __int64 v30; // r8
	__int64 v31; // rdi
	__int64 v32; // rcx
	unsigned int v33; // r9d
	unsigned __int64 v34; // rdx
	_DWORD* v35; // r8
	unsigned __int64 v36; // r10
	_DWORD* v37; // rcx
	unsigned int v38; // ebx
	int* v39; // r8
	int v40; // ecx
	int v41; // eax
	unsigned int v42; // r11d
	unsigned int v43; // r9d
	unsigned __int64 v44; // rdx
	unsigned int v45; // r10d
	unsigned __int64 v46; // r8
	__int64 v47; // r11
	__int64 v48; // rax
	unsigned int v49; // r9d
	__int64 v50; // rbx
	__int64 v51; // rcx
	unsigned int v52; // ebx
	unsigned __int64 v53; // rdx
	_DWORD* v54; // r8
	unsigned __int64 v55; // r9
	_DWORD* v56; // rcx
	unsigned int v57; // ebx
	int* v58; // r8
	int v59; // ecx
	int v60; // eax
	unsigned int v61; // r11d
	unsigned int v62; // r10d
	int* v63; // [rsp+28h] [rbp-70h] BYREF
	unsigned __int64 v64; // [rsp+30h] [rbp-68h]
	__int64* v65; // [rsp+38h] [rbp-60h]
	unsigned __int64 v66; // [rsp+40h] [rbp-58h]
	__int64 v67; // [rsp+48h] [rbp-50h]
	unsigned __int64 v68; // [rsp+50h] [rbp-48h]

	v2 = *(_QWORD*)(a1 + 40) == 0i64;
	v65 = (__int64*)a2;
	v4 = a1;
	v67 = a1;
	if (!v2)
	{
		v7 = *(int**)a2;
		v8 = *(_QWORD*)(a2 + 8);
		v9 = 0i64;
		v10 = 0i64;
		v63 = 0i64;
		v64 = 0i64;
		if (v8)
		{
			v11 = sub_14018DB00(0i64, v8, 12i64);
			sub_1407DB590(v11, v7, 12 * v8);
			v10 = v8;
			if (v11)
				v9 = v11;
			v64 = v8;
			v63 = v9;
		}
		v12 = *(_QWORD*)(v4 + 40);
		v13 = *(int**)(v4 + 32);
		if (v12)
		{
			v14 = v10 + v12;
			v15 = sub_14018DB00((__int64)v9, v10 + v12, 12i64);
			sub_1407DB590(&v15[3 * v10], v13, 12 * v12);
			if (v9 != v15)
			{
				sub_1407DB590(v15, v9, 12 * v10);
				if (v9)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
				v9 = v15;
				v63 = v15;
			}
			v10 += v12;
			v64 = v14;
			v4 = v67;
		}
		if (v10 > 1)
		{
			sub_140776360((__int64*)&v63);
			v9 = v63;
			v10 = v64;
		}
		v16 = 0;
		v17 = 0i64;
		if (v10 == 1)
			goto LABEL_27;
		v18 = 0i64;
		do
		{
			if (v9[v18] == v9[v18 + 3] && v9[v18 + 2] >= (unsigned int)(v9[v18 + 4] - 1))
			{
				v16 = 1;
				v9[v18 + 4] = v9[v18 + 1];
				v19 = v9[v18 + 2];
				if (v19 < v9[v18 + 5])
					v19 = v9[v18 + 5];
				v9[v18 + 5] = v19;
				sub_140480DB0((__int64)&v63, v17);
				v9 = v63;
				v10 = v64;
			}
			else
			{
				++v17;
				v18 += 3i64;
			}
		} while (v17 < v10 - 1);
		v4 = v67;
		if (!v16)
		{
		LABEL_27:
			v20 = *(_QWORD*)(v4 + 40);
			v21 = 0i64;
			v66 = 0i64;
			v68 = v20;
			if (!v20)
			{
			LABEL_97:
				v52 = 0;
				if (v9)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
				return v52;
			}
			v22 = v65;
			v23 = *(int**)(v4 + 32);
			v24 = v65[1];
			while (1)
			{
				v25 = *v23;
				v26 = 0;
				v27 = 0;
				if ((*v23 & 1) != 0)
					v26 = -1;
				else
					v27 = 1;
				v28 = 0i64;
				v29 = v25 + 1;
				v30 = v24;
				if (v24)
					break;
			LABEL_62:
				v44 = 0i64;
				v45 = v25 - 1;
				v46 = v24;
				if (v24)
				{
					v47 = *v22;
					while (1)
					{
						v48 = v44 + ((v46 - v44) >> 1);
						v49 = *(_DWORD*)(v47 + 12 * v48);
						if (v45 == v49)
							break;
						if (v45 >= v49)
							v44 = v48 + 1;
						else
							v46 = v44 + ((v46 - v44) >> 1);
						if (v44 >= v46)
							goto LABEL_69;
					}
					v53 = v44 + ((v46 - v44) >> 1);
					if (v48)
					{
						v54 = (_DWORD*)(v47 + 12 * v48);
						while (1)
						{
							v54 -= 3;
							--v53;
							if (v45 != *v54)
								break;
							if (!v53)
								goto LABEL_81;
						}
						++v53;
					}
				LABEL_81:
					v55 = v48 + 1;
					if (v48 + 1 < v24)
					{
						v56 = (_DWORD*)(v47 + 12 * v55);
						do
						{
							if (v45 != *v56)
								break;
							++v55;
							v56 += 3;
						} while (v55 < v24);
					}
					if (v53 < v55)
					{
						v57 = v23[1];
						v58 = (int*)(v47 + 4 * (v53 + 2 * v53 + 1));
						do
						{
							v59 = *v58;
							v60 = 0;
							if (*v58)
								v60 = v26;
							v61 = v60 + v59;
							if (v57 >= v60 + v59 && v57 <= v27 + v58[1])
								goto LABEL_71;
							v62 = v23[2];
							if (v62 >= v61 && v62 <= v27 + v58[1])
								goto LABEL_71;
							if (v62 >= v27 + v58[1] && v57 <= v61)
								goto LABEL_71;
							++v53;
							v58 += 3;
						} while (v53 < v55);
					}
				}
			LABEL_69:
				v22 = v65;
				++v21;
				v23 += 3;
				v66 = v21;
				if (v21 >= v68)
					goto LABEL_97;
			}
			v31 = *v22;
			while (1)
			{
				v32 = v28 + ((v30 - v28) >> 1);
				v33 = *(_DWORD*)(v31 + 12 * v32);
				if (v29 == v33)
					break;
				if (v29 >= v33)
					v28 = v32 + 1;
				else
					v30 = v28 + ((v30 - v28) >> 1);
				if (v28 >= v30)
					goto LABEL_61;
			}
			v34 = v28 + ((v30 - v28) >> 1);
			if (v32)
			{
				v35 = (_DWORD*)(v31 + 12 * v32);
				while (1)
				{
					v35 -= 3;
					--v34;
					if (v29 != *v35)
						break;
					if (!v34)
						goto LABEL_46;
				}
				++v34;
			}
		LABEL_46:
			v36 = v32 + 1;
			if (v32 + 1 < v24)
			{
				v37 = (_DWORD*)(v31 + 12 * v36);
				do
				{
					if (v29 != *v37)
						break;
					++v36;
					v37 += 3;
				} while (v36 < v24);
			}
			if (v34 >= v36)
			{
			LABEL_61:
				v22 = v65;
				v21 = v66;
				goto LABEL_62;
			}
			v38 = v23[1];
			v39 = (int*)(v31 + 4 * (v34 + 2 * v34 + 1));
			while (1)
			{
				v40 = *v39;
				v41 = 0;
				if (*v39)
					v41 = v26;
				v42 = v41 + v40;
				if (v38 >= v41 + v40 && v38 <= v27 + v39[1])
					break;
				v43 = v23[2];
				if (v43 >= v42 && v43 <= v27 + v39[1])
					break;
				if (v43 >= v27 + v39[1] && v38 <= v42)
					break;
				++v34;
				v39 += 3;
				if (v34 >= v36)
					goto LABEL_61;
			}
		LABEL_71:
			v10 = v64;
		}
		v50 = v67;
		v51 = *(_QWORD*)(v67 + 32);
		if (v51)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v51 - 16) + 8i64))(v51 - 16);
		*(_QWORD*)(v50 + 32) = v9;
		*(_QWORD*)(v50 + 40) = v10;
		return 1;
	}
	v5 = *(_QWORD*)(a1 + 32);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	*(_QWORD*)(v4 + 32) = *(_QWORD*)a2;
	*(_QWORD*)(v4 + 40) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)a2 = 0i64;
	*(_QWORD*)(a2 + 8) = 0i64;
	return 1i64;
}
// 14076F43F: conditional instruction was optimized away because %var_78.4==0
// 14076F4B0: conditional instruction was optimized away because ecx.4==0
// 14076F5B0: conditional instruction was optimized away because %var_78.4==0

