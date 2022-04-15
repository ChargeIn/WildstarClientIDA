//----- (00000001403AC0E0) ----------------------------------------------------
__int64 __fastcall sub_1403AC0E0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, unsigned __int64 a5)
{
	__int64 v6; // r10
	__int64 v7; // rdx
	__int64 v8; // rax
	int v9; // ecx
	int v10; // eax
	int v11; // r8d
	__int64 v12; // rdx
	int v13; // r8d
	__int64 v14; // rbx
	__int64 v15; // r9
	unsigned __int64 v16; // rsi
	__int64 v17; // r8
	unsigned __int64 v18; // r11
	float v19; // xmm0_4
	float v20; // xmm0_4
	unsigned __int64 v21; // r10
	float v22; // xmm0_4
	float v23; // xmm0_4
	unsigned __int64 v24; // r10
	float v25; // xmm0_4
	float v26; // xmm0_4
	unsigned __int64 v27; // r10
	float v28; // xmm0_4
	float v29; // xmm0_4
	unsigned __int64 v30; // r10
	__int64 v31; // rcx
	unsigned __int64 v32; // rbx
	float v33; // xmm0_4
	float v34; // xmm0_4
	unsigned __int64 v35; // r8
	__int64 v36; // r8
	_DWORD* v37; // rcx
	__int64 v38; // rbx
	__int64 v39; // r9
	unsigned __int64 v40; // rsi
	__int64 v41; // r8
	unsigned __int64 v42; // r11
	float v43; // xmm0_4
	float v44; // xmm0_4
	unsigned __int64 v45; // r10
	float v46; // xmm0_4
	float v47; // xmm0_4
	unsigned __int64 v48; // r10
	float v49; // xmm0_4
	float v50; // xmm0_4
	unsigned __int64 v51; // r10
	float v52; // xmm0_4
	float v53; // xmm0_4
	unsigned __int64 v54; // r10
	__int64 v55; // r8
	unsigned __int64 v56; // rbx
	float v57; // xmm0_4
	float v58; // xmm0_4
	unsigned __int64 v59; // rax
	__int64 v61; // [rsp+30h] [rbp+28h]

	if (!a5 || a4 <= a5)
		return 0i64;
	v6 = *(_QWORD*)(a1 + 8);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		v9 = *(_DWORD*)(v8 + 32);
		if (v9 < 39 || v9 <= 39 && *(_DWORD*)(v8 + 36) < a3)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v10 = *(_DWORD*)(v7 + 32), v10 > 39) || v10 >= 39 && a3 < *(_DWORD*)(v7 + 36))
		v61 = v6;
	else
		v61 = v7;
	if (v61 == v6)
		return 0i64;
	v11 = *(_DWORD*)(v61 + 48);
	v12 = 0i64;
	if (v11)
	{
		v13 = v11 - 1;
		if (v13)
		{
			if (v13 == 1)
			{
				v14 = *(_QWORD*)(v61 + 64);
				v15 = a4 - a5;
				v16 = 0i64;
				if (v14 >= 4)
				{
					v17 = *(_QWORD*)(v61 + 56) + 16i64;
					v18 = ((unsigned __int64)(v14 - 4) >> 2) + 1;
					v16 = 4 * v18;
					do
					{
						if (*(_DWORD*)(v17 - 16) == 10)
						{
							v19 = (float)(int)v15;
							if (v15 < 0)
								v19 = v19 + 1.8446744e19;
							v20 = v19 * *(float*)(v17 - 4);
							v21 = 0i64;
							if (v20 >= 9.223372e18)
							{
								v20 = v20 - 9.223372e18;
								if (v20 < 9.223372e18)
									v21 = 0x8000000000000000ui64;
							}
							v12 += v21 + (unsigned int)(int)v20;
						}
						if (*(_DWORD*)v17 == 10)
						{
							v22 = (float)(int)v15;
							if (v15 < 0)
								v22 = v22 + 1.8446744e19;
							v23 = v22 * *(float*)(v17 + 12);
							v24 = 0i64;
							if (v23 >= 9.223372e18)
							{
								v23 = v23 - 9.223372e18;
								if (v23 < 9.223372e18)
									v24 = 0x8000000000000000ui64;
							}
							v12 += v24 + (unsigned int)(int)v23;
						}
						if (*(_DWORD*)(v17 + 16) == 10)
						{
							v25 = (float)(int)v15;
							if (v15 < 0)
								v25 = v25 + 1.8446744e19;
							v26 = v25 * *(float*)(v17 + 28);
							v27 = 0i64;
							if (v26 >= 9.223372e18)
							{
								v26 = v26 - 9.223372e18;
								if (v26 < 9.223372e18)
									v27 = 0x8000000000000000ui64;
							}
							v12 += v27 + (unsigned int)(int)v26;
						}
						if (*(_DWORD*)(v17 + 32) == 10)
						{
							v28 = (float)(int)v15;
							if (v15 < 0)
								v28 = v28 + 1.8446744e19;
							v29 = v28 * *(float*)(v17 + 44);
							v30 = 0i64;
							if (v29 >= 9.223372e18)
							{
								v29 = v29 - 9.223372e18;
								if (v29 < 9.223372e18)
									v30 = 0x8000000000000000ui64;
							}
							v12 += v30 + (unsigned int)(int)v29;
						}
						v17 += 64i64;
						--v18;
					} while (v18);
				}
				if (v16 < v14)
				{
					v31 = *(_QWORD*)(v61 + 56) + 16 * v16;
					v32 = v14 - v16;
					do
					{
						if (*(_DWORD*)v31 == 10)
						{
							v33 = (float)(int)v15;
							if (v15 < 0)
								v33 = v33 + 1.8446744e19;
							v34 = v33 * *(float*)(v31 + 12);
							v35 = 0i64;
							if (v34 >= 9.223372e18)
							{
								v34 = v34 - 9.223372e18;
								if (v34 < 9.223372e18)
									v35 = 0x8000000000000000ui64;
							}
							v12 += v35 + (unsigned int)(int)v34;
						}
						v31 += 16i64;
						--v32;
					} while (v32);
				}
			}
		}
		else
		{
			v36 = *(_QWORD*)(v61 + 64);
			if (v36)
			{
				v37 = *(_DWORD**)(v61 + 56);
				do
				{
					if (*v37 == 10)
						v12 += (unsigned int)v37[3];
					v37 += 4;
					--v36;
				} while (v36);
			}
		}
	}
	else
	{
		v38 = *(_QWORD*)(v61 + 64);
		v39 = a4 - a5;
		v40 = 0i64;
		if (v38 >= 4)
		{
			v41 = *(_QWORD*)(v61 + 56) + 16i64;
			v42 = ((unsigned __int64)(v38 - 4) >> 2) + 1;
			v40 = 4 * v42;
			do
			{
				if (*(_DWORD*)(v41 - 16) == 10)
				{
					v43 = (float)(int)v39;
					if (v39 < 0)
						v43 = v43 + 1.8446744e19;
					v44 = v43 * *(float*)(v41 - 4);
					v45 = 0i64;
					if (v44 >= 9.223372e18)
					{
						v44 = v44 - 9.223372e18;
						if (v44 < 9.223372e18)
							v45 = 0x8000000000000000ui64;
					}
					v12 += v45 + (unsigned int)(int)v44;
				}
				if (*(_DWORD*)v41 == 10)
				{
					v46 = (float)(int)v39;
					if (v39 < 0)
						v46 = v46 + 1.8446744e19;
					v47 = v46 * *(float*)(v41 + 12);
					v48 = 0i64;
					if (v47 >= 9.223372e18)
					{
						v47 = v47 - 9.223372e18;
						if (v47 < 9.223372e18)
							v48 = 0x8000000000000000ui64;
					}
					v12 += v48 + (unsigned int)(int)v47;
				}
				if (*(_DWORD*)(v41 + 16) == 10)
				{
					v49 = (float)(int)v39;
					if (v39 < 0)
						v49 = v49 + 1.8446744e19;
					v50 = v49 * *(float*)(v41 + 28);
					v51 = 0i64;
					if (v50 >= 9.223372e18)
					{
						v50 = v50 - 9.223372e18;
						if (v50 < 9.223372e18)
							v51 = 0x8000000000000000ui64;
					}
					v12 += v51 + (unsigned int)(int)v50;
				}
				if (*(_DWORD*)(v41 + 32) == 10)
				{
					v52 = (float)(int)v39;
					if (v39 < 0)
						v52 = v52 + 1.8446744e19;
					v53 = v52 * *(float*)(v41 + 44);
					v54 = 0i64;
					if (v53 >= 9.223372e18)
					{
						v53 = v53 - 9.223372e18;
						if (v53 < 9.223372e18)
							v54 = 0x8000000000000000ui64;
					}
					v12 += v54 + (unsigned int)(int)v53;
				}
				v41 += 64i64;
				--v42;
			} while (v42);
		}
		if (v40 < v38)
		{
			v55 = *(_QWORD*)(v61 + 56) + 16 * v40;
			v56 = v38 - v40;
			do
			{
				if (*(_DWORD*)v55 == 10)
				{
					v57 = (float)(int)v39;
					if (v39 < 0)
						v57 = v57 + 1.8446744e19;
					v58 = v57 * *(float*)(v55 + 12);
					v59 = 0i64;
					if (v58 >= 9.223372e18)
					{
						v58 = v58 - 9.223372e18;
						if (v58 < 9.223372e18)
							v59 = 0x8000000000000000ui64;
					}
					v12 += v59 + (unsigned int)(int)v58;
				}
				v55 += 16i64;
				--v56;
			} while (v56);
		}
	}
	return v12;
}

