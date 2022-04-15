//----- (0000000140367E70) ----------------------------------------------------
__int64 __fastcall sub_140367E70(__int64 a1, __int64 a2)
{
	int v4; // ebx
	LONGLONG v5; // r15
	__int64 result; // rax
	__int64 v7; // rax
	unsigned int v8; // esi
	__int64 v9; // rdi
	__int64 v10; // rcx
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rax
	__int64 v13; // rbp
	__int64 v14; // rdi
	__int64 v15; // r14
	bool v16; // zf
	_QWORD* v17; // rcx
	unsigned __int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rcx
	unsigned __int64 v22; // rcx
	unsigned __int64 v23; // rax
	unsigned int v24; // ebp
	__int64 v25; // rdi
	__int64 v26; // rcx
	unsigned __int64 v27; // rcx
	unsigned __int64 v28; // rax
	__int64 v29; // rdi
	__int64 v30; // rcx
	unsigned __int64 v31; // rcx
	unsigned __int64 v32; // rax
	__int64 v33; // rdi
	__int64 v34; // rcx
	unsigned __int64 v35; // rcx
	unsigned __int64 v36; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp+8h] BYREF
	LARGE_INTEGER v38; // [rsp+68h] [rbp+10h] BYREF

	QueryPerformanceCounter(&PerformanceCount);
	v4 = *(_DWORD*)a2;
	v5 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	if (*(_DWORD*)a2)
		v5 = *(_QWORD*)(a2 + 8);
	else
		v4 = 5;
	result = sub_140350420(*(_QWORD*)(a1 + 16), a2);
	if ((_DWORD)result)
	{
		v7 = *(_QWORD*)(a1 + 4808);
		if (v7 && !*(_DWORD*)(v7 + 28))
			*(_DWORD*)(v7 + 28) = 1;
		v8 = 1;
		if (!*(_DWORD*)(a1 + 2288))
		{
			sub_140370B30(
				(__int64*)(a1 + 2280),
				1448i64,
				(__int64(__fastcall*)(__int64, __int64, __int64))sub_140354F50,
				a1 + 2180);
			*(_DWORD*)(a1 + 2288) = 1;
		}
		v9 = *(_QWORD*)(a1 + 2280);
		if (v9)
		{
			while (1)
			{
				v10 = v9;
				v9 = *(_QWORD*)(v9 + 1456);
				if (*(_QWORD*)(v10 + 1448) && !(unsigned int)sub_14037CC30(v10, a2))
					v8 = 0;
				if (v4 >= 0)
				{
					QueryPerformanceCounter(&v38);
					v11 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
					v12 = qword_140C636B0 * (unsigned int)v4;
					if (v11 >= v12 || (unsigned int)((v12 - v11) / qword_140C636B0) == -1)
						return 0i64;
				}
				if (!v9)
					goto LABEL_18;
			}
		}
		else
		{
		LABEL_18:
			if (!*(_DWORD*)(a1 + 2464))
			{
				sub_140370B30(
					(__int64*)(a1 + 2456),
					128i64,
					(__int64(__fastcall*)(__int64, __int64, __int64))sub_140354F50,
					a1 + 2400);
				*(_DWORD*)(a1 + 2464) = 1;
			}
			v13 = *(_QWORD*)(a1 + 2456);
			if (v13)
			{
				while (1)
				{
					v14 = v13;
					v15 = v13 + 136;
					v16 = *(_QWORD*)(v13 + 128) == 0i64;
					v13 = *(_QWORD*)(v13 + 136);
					if (!v16)
					{
						if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v14 + 16) + 48i64))(
							*(_QWORD*)(v14 + 16),
							a2))
						{
							sub_14038A590(v14);
							v17 = *(_QWORD**)(v14 + 128);
							if (v17)
								*v17 = *(_QWORD*)v15;
							if (*(_QWORD*)v15)
								*(_QWORD*)(*(_QWORD*)v15 + 128i64) = *(_QWORD*)(v14 + 128);
							*(_QWORD*)(v14 + 128) = 0i64;
							*(_QWORD*)v15 = 0i64;
						}
						else
						{
							v8 = 0;
						}
					}
					if (v4 >= 0)
					{
						QueryPerformanceCounter(&v38);
						v18 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
						v19 = qword_140C636B0 * (unsigned int)v4;
						if (v18 >= v19 || (unsigned int)((v19 - v18) / qword_140C636B0) == -1)
							break;
					}
					if (!v13)
						goto LABEL_32;
				}
			}
			else
			{
			LABEL_32:
				v20 = *(_QWORD*)(a1 + 2576);
				if (v20)
				{
					v21 = *(_QWORD*)(v20 + 40);
					if (v21)
					{
						if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v21 + 16i64))(v21, a2))
							v8 = 0;
					}
				}
				if (v4 < 0
					|| (QueryPerformanceCounter(&PerformanceCount),
						v22 = PerformanceCount.QuadPart - v5 - ::PerformanceCount.QuadPart,
						v23 = qword_140C636B0 * (unsigned int)v4,
						v22 < v23)
					&& (unsigned int)((v23 - v22) / qword_140C636B0) != -1)
				{
					v24 = 0;
					v25 = a1 + 2592;
					while (1)
					{
						if (*(_QWORD*)v25)
						{
							v26 = *(_QWORD*)(*(_QWORD*)v25 + 40i64);
							if (v26)
							{
								if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v26 + 16i64))(v26, a2))
									v8 = 0;
							}
						}
						if (v4 >= 0)
						{
							QueryPerformanceCounter(&v38);
							v27 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
							v28 = qword_140C636B0 * (unsigned int)v4;
							if (v27 >= v28 || (unsigned int)((v28 - v27) / qword_140C636B0) == -1)
								break;
						}
						++v24;
						v25 += 8i64;
						if (v24 >= 4)
						{
							v29 = *(_QWORD*)(a1 + 5080);
							if (v29)
							{
								while (1)
								{
									v30 = v29;
									v29 = *(_QWORD*)(v29 + 1304);
									if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v30 + 32i64))(v30, a2))
										v8 = 0;
									if (v4 >= 0)
									{
										QueryPerformanceCounter(&v38);
										v31 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
										v32 = qword_140C636B0 * (unsigned int)v4;
										if (v31 >= v32 || (unsigned int)((v32 - v31) / qword_140C636B0) == -1)
											break;
									}
									if (!v29)
										goto LABEL_55;
								}
							}
							else
							{
							LABEL_55:
								v33 = *(_QWORD*)(a1 + 5328);
								if (!v33)
									return v8;
								while (1)
								{
									v34 = v33;
									v33 = *(_QWORD*)(v33 + 1176);
									if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v34 + 32i64))(v34, a2))
										v8 = 0;
									if (v4 >= 0)
									{
										QueryPerformanceCounter(&v38);
										v35 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
										v36 = qword_140C636B0 * (unsigned int)v4;
										if (v35 >= v36 || (unsigned int)((v36 - v35) / qword_140C636B0) == -1)
											break;
									}
									if (!v33)
										return v8;
								}
							}
							return 0i64;
						}
					}
				}
			}
			return 0i64;
		}
	}
	return result;
}
// 140367F63: conditional instruction was optimized away because ebx.4!=0
// 14036806D: conditional instruction was optimized away because ebx.4!=0
// 1403680E4: conditional instruction was optimized away because ebx.4!=0
// 140C636B0: using guessed type __int64 qword_140C636B0;

