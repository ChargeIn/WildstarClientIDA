//----- (0000000140724950) ----------------------------------------------------
__int64 __fastcall sub_140724950(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v5; // r15
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // r13
	__int64 v11; // rbx
	unsigned __int64 v12; // r14
	__int64 v13; // rdi
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rsi
	__int64 v17; // rax
	unsigned int v18; // eax
	__int64 v19; // rbx
	__int64 v20; // rax

	result = sub_140207D60(*(_DWORD*)(a1 + 108));
	v5 = result;
	if (result)
	{
		if ((*(_BYTE*)(result + 24) & 0x20) == 0)
		{
			v6 = *(_QWORD*)(a1 + 848);
			if (!v6)
				return result;
			v7 = *(_QWORD*)(v6 + 32);
			if (v7)
				sub_1402EE640(v7);
			sub_14018B900(v6, 0);
			*(_QWORD*)(a1 + 848) = 0i64;
		}
		result = sub_1404C2740(a1);
		v8 = result;
		if (result)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 344i64))(result);
			if (result)
			{
				v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 344i64))(v8);
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9);
				v10 = result;
				if (result)
				{
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 368i64))(v8);
					v11 = 0i64;
					v12 = result;
					if (result)
					{
						while (1)
						{
							result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 376i64))(v8, v11);
							v13 = result;
							if (result)
							{
								result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 24i64))(result);
								if (!(_DWORD)result)
								{
									result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 40i64))(v13);
									if ((_DWORD)result == *(_DWORD*)(a1 + 116))
										break;
								}
							}
							if (++v11 >= v12)
								return result;
						}
						if ((*(_BYTE*)(v5 + 24) & 0x20) != 0)
						{
							return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v13 + 64i64))(v13, 0i64);
						}
						else
						{
							v14 = *(_QWORD*)(v10 + 72);
							result = *(unsigned int*)(v14 + 40);
							if ((_DWORD)result)
							{
								v15 = *(unsigned int*)(a1 + 120);
								if ((unsigned int)result > (unsigned int)v15)
								{
									v16 = *(unsigned __int16*)(*(_QWORD*)(v14 + 48) + 2 * v15);
									v17 = sub_140724720(a2);
									if (v17)
										v18 = *(_DWORD*)(v17 + 108);
									else
										v18 = 0;
									v19 = v18;
									if (v18 >= (unsigned __int64)*(unsigned int*)(v10 + 64))
										v19 = 0i64;
									v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
									return (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v20 + 56i64))(v20, v19, v16);
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}

