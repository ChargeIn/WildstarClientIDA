//----- (00000001403682C0) ----------------------------------------------------
__int64 __fastcall sub_1403682C0(__int64 a1, __int64 a2)
{
	int v4; // ebx
	LONGLONG v5; // r15
	__int64 result; // rax
	unsigned int v7; // edi
	__int64 v8; // rsi
	__int64 v9; // rcx
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rsi
	__int64 v13; // rcx
	unsigned __int64 v14; // rcx
	unsigned __int64 v15; // rax
	_QWORD* v16; // rsi
	_QWORD* v17; // rcx
	unsigned __int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rcx
	unsigned __int64 v22; // rcx
	unsigned __int64 v23; // rax
	__int64 v24; // rsi
	unsigned int v25; // ebp
	__int64 v26; // rcx
	unsigned __int64 v27; // rcx
	unsigned __int64 v28; // rax
	__int64 v29; // rsi
	__int64 v30; // rcx
	unsigned __int64 v31; // rcx
	unsigned __int64 v32; // rax
	__int64 v33; // rsi
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
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 144i64))(a1, a2);
	if ((_DWORD)result)
	{
		v7 = 1;
		if (!*(_DWORD*)(a1 + 2304))
		{
			sub_140370B30(
				(__int64*)(a1 + 2296),
				1464i64,
				(__int64(__fastcall*)(__int64, __int64, __int64))sub_140354F50,
				a1 + 2180);
			*(_DWORD*)(a1 + 2304) = 1;
		}
		v8 = *(_QWORD*)(a1 + 2296);
		while (v8)
		{
			v9 = v8;
			v8 = *(_QWORD*)(v8 + 1472);
			if (*(_QWORD*)(v9 + 1464) && !(unsigned int)sub_14037D060(v9, a2, 1))
				v7 = 0;
			if (v4 >= 0)
			{
				QueryPerformanceCounter(&v38);
				v10 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
				v11 = qword_140C636B0 * (unsigned int)v4;
				if (v10 >= v11 || (unsigned int)((v11 - v10) / qword_140C636B0) == -1)
					return 0i64;
			}
		}
		if (!*(_DWORD*)(a1 + 2320))
		{
			sub_140370B30(
				(__int64*)(a1 + 2312),
				1480i64,
				(__int64(__fastcall*)(__int64, __int64, __int64))sub_140354F50,
				a1 + 2180);
			*(_DWORD*)(a1 + 2320) = 1;
		}
		v12 = *(_QWORD*)(a1 + 2312);
		while (v12)
		{
			v13 = v12;
			v12 = *(_QWORD*)(v12 + 1488);
			if (!(unsigned int)sub_14037D3E0(v13, a2))
				v7 = 0;
			if (v4 >= 0)
			{
				QueryPerformanceCounter(&v38);
				v14 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
				v15 = qword_140C636B0 * (unsigned int)v4;
				if (v14 >= v15 || (unsigned int)((v15 - v14) / qword_140C636B0) == -1)
					return 0i64;
			}
		}
		if (!*(_DWORD*)(a1 + 2480))
		{
			sub_140370B30(
				(__int64*)(a1 + 2472),
				144i64,
				(__int64(__fastcall*)(__int64, __int64, __int64))sub_140354F50,
				a1 + 2400);
			*(_DWORD*)(a1 + 2480) = 1;
		}
		v16 = *(_QWORD**)(a1 + 2472);
		while (v16)
		{
			v17 = v16;
			v16 = (_QWORD*)v16[19];
			if (v17[18] && !(unsigned int)sub_14038A510(v17))
				v7 = 0;
			if (v4 >= 0)
			{
				QueryPerformanceCounter(&v38);
				v18 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
				v19 = qword_140C636B0 * (unsigned int)v4;
				if (v18 >= v19 || (unsigned int)((v19 - v18) / qword_140C636B0) == -1)
					return 0i64;
			}
		}
		v20 = *(_QWORD*)(a1 + 2576);
		if (v20)
		{
			v21 = *(_QWORD*)(v20 + 40);
			if (v21)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v21 + 16i64))(v21, a2))
					v7 = 0;
			}
		}
		if (v4 >= 0)
		{
			QueryPerformanceCounter(&PerformanceCount);
			v22 = PerformanceCount.QuadPart - v5 - ::PerformanceCount.QuadPart;
			v23 = qword_140C636B0 * (unsigned int)v4;
			if (v22 >= v23 || (unsigned int)((v23 - v22) / qword_140C636B0) == -1)
				return 0i64;
		}
		v24 = a1 + 2592;
		v25 = 0;
		while (1)
		{
			if (*(_QWORD*)v24)
			{
				v26 = *(_QWORD*)(*(_QWORD*)v24 + 40i64);
				if (v26)
				{
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v26 + 16i64))(v26, a2))
						v7 = 0;
				}
			}
			if (v4 >= 0)
			{
				QueryPerformanceCounter(&v38);
				v27 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
				v28 = qword_140C636B0 * (unsigned int)v4;
				if (v27 >= v28 || (unsigned int)((v28 - v27) / qword_140C636B0) == -1)
					return 0i64;
			}
			++v25;
			v24 += 8i64;
			if (v25 >= 4)
			{
				v29 = *(_QWORD*)(a1 + 5336);
				if (v29)
				{
					while (1)
					{
						v30 = v29;
						v29 = *(_QWORD*)(v29 + 1192);
						if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v30 + 40i64))(v30, a2))
							v7 = 0;
						if (v4 >= 0)
						{
							QueryPerformanceCounter(&v38);
							v31 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
							v32 = qword_140C636B0 * (unsigned int)v4;
							if (v31 >= v32 || (unsigned int)((v32 - v31) / qword_140C636B0) == -1)
								break;
						}
						if (!v29)
							goto LABEL_57;
					}
				}
				else
				{
				LABEL_57:
					v33 = *(_QWORD*)(a1 + 5392);
					if (!v33)
						return v7;
					while (1)
					{
						v34 = v33;
						v33 = *(_QWORD*)(v33 + 512);
						if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v34 + 56i64))(v34, a2))
							v7 = 0;
						if (v4 >= 0)
						{
							QueryPerformanceCounter(&v38);
							v35 = v38.QuadPart - v5 - ::PerformanceCount.QuadPart;
							v36 = qword_140C636B0 * (unsigned int)v4;
							if (v35 >= v36 || (unsigned int)((v36 - v35) / qword_140C636B0) == -1)
								break;
						}
						if (!v33)
							return v7;
					}
				}
				return 0i64;
			}
		}
	}
	return result;
}
// 14036839A: conditional instruction was optimized away because ebx.4!=0
// 14036844A: conditional instruction was optimized away because ebx.4!=0
// 1403684F9: conditional instruction was optimized away because ebx.4!=0
// 14036856C: conditional instruction was optimized away because ebx.4!=0
// 140C636B0: using guessed type __int64 qword_140C636B0;

