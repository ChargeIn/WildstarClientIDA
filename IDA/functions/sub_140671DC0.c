//----- (0000000140671DC0) ----------------------------------------------------
void __fastcall sub_140671DC0(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	int v4; // edi
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	__int64 v8; // rbx
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v11; // rcx
	__int64* v12; // rax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	if (*(_DWORD*)(a1 + 1344))
	{
		if (*(_QWORD*)(a1 + 168))
		{
			v3 = *(_QWORD*)(a1 + 160);
			if (v3)
			{
				if (*(_QWORD*)(v3 + 304))
				{
					if ((int)(*(_DWORD*)(v3 + 312) - sub_14018CDF0()) > 0)
					{
						v4 = *(_DWORD*)(v3 + 312) - sub_14018CDF0();
						if (v4)
						{
							v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
							v7 = *(_QWORD*)(v6 + 16);
							*(_QWORD*)v7 = *v5;
							*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
							*(_QWORD*)(v6 + 16) += 16i64;
							v8 = *(_QWORD*)(a2 + 16);
							v9 = (unsigned __int64*)sub_14018F0E0(&v13, L"nSoulboundTradeAllowedTimeSeconds")[1];
							if (v9)
							{
								v10 = -1i64;
								do
									++v10;
								while (*((_BYTE*)v9 + v10));
								sub_140058710(v8, v9, v10);
							}
							else
							{
								*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
								*(_QWORD*)(v8 + 16) += 16i64;
							}
							if (v14)
								sub_14018B900(v14, 0);
							v11 = *(_QWORD*)(v8 + 16);
							*(_DWORD*)(v11 + 8) = 3;
							*(double*)v11 = (float)((float)v4 * 0.001);
							*(_QWORD*)(v8 + 16) += 16i64;
							v12 = (__int64*)sub_1400580E0(v8, -3);
							sub_14005EA50(
								v8,
								v12,
								(int*)(*(_QWORD*)(v8 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
							*(_QWORD*)(v8 + 16) -= 32i64;
							*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
						}
					}
				}
			}
		}
	}
}
// 140671E4B: variable 'v6' is possibly undefined
// 140B2F910: using guessed type wchar_t aNsoulboundtrad[34];

