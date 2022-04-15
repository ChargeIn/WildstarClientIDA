//----- (00000001402773E0) ----------------------------------------------------
__int64 __fastcall sub_1402773E0(__int64 a1, int a2)
{
	_DWORD* v2; // rbx
	unsigned int CurrentThreadId; // eax
	volatile signed __int64* v6; // r14
	__int64 v7; // rdx
	__int64 v8; // rcx
	int v9; // eax
	int v10; // ebx
	__int64 v11; // rsi
	__int64 i; // rsi
	__int64 j; // rsi
	__int64 k; // rsi
	__int64 m; // rsi
	__int64 n; // rsi
	__int64 ii; // rsi
	int v18; // eax
	__int64 v19; // rsi
	int v20; // eax
	__int64 v21; // rsi
	__int64 jj; // rsi
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rsi
	__int64 v26; // rsi
	__int64 v27; // rsi
	int v28; // eax
	HANDLE EventW; // rcx
	__int64 v31; // [rsp+50h] [rbp+8h]
	__int64 v32; // [rsp+60h] [rbp+18h] BYREF

	v2 = (_DWORD*)(a1 + 24);
	v31 = a1 + 24;
	CurrentThreadId = GetCurrentThreadId();
	v6 = (volatile signed __int64*)(v31 + 8);
	v7 = CurrentThreadId;
	if (*v2 == CurrentThreadId)
	{
		++* v6;
	}
	else
	{
		v8 = 0i64;
		while (_InterlockedCompareExchange64(v6, 1i64, 0i64))
		{
			_mm_pause();
			if ((unsigned __int64)++v8 >= 0x400)
			{
				sub_14019FB60(v31, CurrentThreadId);
				goto LABEL_8;
			}
		}
		*(_DWORD*)v31 = CurrentThreadId;
	}
LABEL_8:
	v9 = *(_DWORD*)(a1 + 6248);
	if (v9 >= a2)
	{
		if (v9 > a2)
			sub_1401981B0((__int64**)(a1 + 6256));
	}
	else
	{
		if (v9 < 1 && a2 >= 1)
		{
			v10 = sub_140277890(a1);
			if (v10 < 0)
				goto LABEL_86;
		}
		if (*(int*)(a1 + 6248) < 2 && a2 >= 2)
		{
			v10 = sub_1402784D0(a1);
			if (v10 < 0)
				goto LABEL_86;
			v10 = sub_1402786A0(a1);
			if (v10 < 0)
				goto LABEL_86;
		}
	}
	v11 = *(_QWORD*)(a1 + 6832);
	if (!v11)
	{
	LABEL_22:
		for (i = *(_QWORD*)(a1 + 6840); i; i = *(_QWORD*)(i + 80))
		{
			v10 = sub_14029E7A0(i, a2);
			if (v10 < 0)
				goto LABEL_86;
		}
		for (j = *(_QWORD*)(a1 + 6848); j; j = *(_QWORD*)(j + 88))
		{
			v10 = sub_14029F5D0(j, a2);
			if (v10 < 0)
				goto LABEL_86;
		}
		for (k = *(_QWORD*)(a1 + 6856); k; k = *(_QWORD*)(k + 296))
		{
			v10 = sub_1402A0970(k, a2);
			if (v10 < 0)
				goto LABEL_86;
		}
		for (m = *(_QWORD*)(a1 + 6864); m; m = *(_QWORD*)(m + 288))
		{
			v10 = sub_1402A3CE0(m, a2);
			if (v10 < 0)
				goto LABEL_86;
		}
		for (n = *(_QWORD*)(a1 + 6872); n; n = *(_QWORD*)(n + 576))
		{
			v10 = sub_1402A6900(n, a2);
			if (v10 < 0)
				goto LABEL_86;
		}
		for (ii = *(_QWORD*)(a1 + 6880); ii; ii = *(_QWORD*)(ii + 160))
		{
			if (*(int*)(ii + 40) >= 1)
			{
				if (a2 < 1)
				{
					v18 = sub_1402A9480(ii);
				LABEL_44:
					v10 = v18;
					if (v18 < 0)
						goto LABEL_86;
				}
			}
			else if (a2 >= 1)
			{
				v18 = sub_1402A93E0(ii);
				goto LABEL_44;
			}
			*(_DWORD*)(ii + 40) = a2;
		}
		v19 = *(_QWORD*)(a1 + 6888);
		if (!v19)
		{
		LABEL_55:
			v21 = *(_QWORD*)(a1 + 6896);
			if (v21)
			{
				while (1)
				{
					v10 = sub_1402AB010(v21, a2);
					if (v10 < 0)
						break;
					v21 = *(_QWORD*)(v21 + 144);
					if (!v21)
						goto LABEL_58;
				}
			}
			else
			{
			LABEL_58:
				for (jj = *(_QWORD*)(a1 + 6904); jj; jj = *(_QWORD*)(jj + 56))
				{
					if (*(int*)(jj + 24) >= 2)
					{
						if (a2 < 2)
						{
							v24 = *(_QWORD*)(jj + 32);
							if (v24)
							{
								(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v24 + 16i64))(v24, v7);
								*(_QWORD*)(jj + 32) = 0i64;
							}
						}
					}
					else if (a2 >= 2)
					{
						v23 = *(_QWORD*)(jj + 16);
						v32 = 1i64;
						v10 = (*(__int64(__fastcall**)(_QWORD, __int64*, __int64))(**(_QWORD**)(v23 + 6336) + 192i64))(
							*(_QWORD*)(v23 + 6336),
							&v32,
							jj + 32);
						if (v10 < 0)
							goto LABEL_86;
						*(_DWORD*)(jj + 40) = 0;
					}
					*(_DWORD*)(jj + 24) = a2;
				}
				v25 = *(_QWORD*)(a1 + 6912);
				if (v25)
				{
					while (1)
					{
						v10 = sub_1402AC310(v25, a2);
						if (v10 < 0)
							break;
						v25 = *(_QWORD*)(v25 + 48);
						if (!v25)
							goto LABEL_71;
					}
				}
				else
				{
				LABEL_71:
					v26 = *(_QWORD*)(a1 + 6920);
					if (v26)
					{
						while (1)
						{
							v10 = sub_1402AC7A0(v26, a2);
							if (v10 < 0)
								break;
							v26 = *(_QWORD*)(v26 + 248);
							if (!v26)
								goto LABEL_74;
						}
					}
					else
					{
					LABEL_74:
						v27 = *(_QWORD*)(a1 + 6928);
						if (v27)
						{
							while (1)
							{
								v10 = sub_1402ACB10(v27, a2);
								if (v10 < 0)
									break;
								v27 = *(_QWORD*)(v27 + 16);
								if (!v27)
									goto LABEL_77;
							}
						}
						else
						{
						LABEL_77:
							v28 = *(_DWORD*)(a1 + 6248);
							if (v28 <= a2
								|| (v28 < 2 || a2 >= 2 || (v10 = sub_140278900(a1), v10 >= 0) && (v10 = sub_140278A70(a1), v10 >= 0))
								&& (*(int*)(a1 + 6248) < 1 || a2 >= 1 || (v10 = sub_140278C20(a1), v10 >= 0)))
							{
								*(_DWORD*)(a1 + 6248) = a2;
								v10 = 0;
							}
						}
					}
				}
			}
			goto LABEL_86;
		}
		while (1)
		{
			if (*(int*)(v19 + 40) >= 1)
			{
				if (a2 < 1)
				{
					v20 = sub_140296900(v19);
				LABEL_53:
					v10 = v20;
					if (v20 < 0)
						goto LABEL_86;
				}
			}
			else if (a2 >= 1)
			{
				v20 = sub_1402AA340(v19);
				goto LABEL_53;
			}
			*(_DWORD*)(v19 + 40) = a2;
			v19 = *(_QWORD*)(v19 + 152);
			if (!v19)
				goto LABEL_55;
		}
	}
	while (1)
	{
		v10 = sub_14029D910(v11, a2);
		if (v10 < 0)
			break;
		v11 = *(_QWORD*)(v11 + 168);
		if (!v11)
			goto LABEL_22;
	}
LABEL_86:
	if (*v6 <= 1ui64)
	{
		*(_DWORD*)v31 = 0;
		_InterlockedExchange64(v6, 0i64);
		if (*(_QWORD*)(v31 + 16))
		{
			if (!*(_QWORD*)(v31 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v31 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v31 + 24));
		}
		return (unsigned int)v10;
	}
	else
	{
		--* v6;
		return (unsigned int)v10;
	}
}
// 14027760A: conditional instruction was optimized away because eax.4<1
// 14027765A: conditional instruction was optimized away because eax.4<1
// 140277702: conditional instruction was optimized away because eax.4<2
// 140277715: variable 'v7' is possibly undefined

