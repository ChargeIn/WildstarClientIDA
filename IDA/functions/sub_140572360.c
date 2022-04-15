//----- (0000000140572360) ----------------------------------------------------
__int64 __fastcall sub_140572360(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax
	_QWORD* v4; // rbx
	unsigned int v5; // ecx
	__int64 v6; // rax
	_QWORD* v7; // rcx

	result = sub_1404804A0(qword_140C65970, *a2, 18);
	v4 = (_QWORD*)result;
	if (result)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 40i64))(result);
		if ((_DWORD)result)
		{
			result = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v4 + 128i64))(v4, 1347241296i64);
			if (result)
			{
				v5 = a2[1];
				*(_DWORD*)(result + 36) = 0;
				*(_DWORD*)(result + 24) = v5;
				v6 = *(_QWORD*)(result + 40);
				if (v6)
				{
					v7 = *(_QWORD**)(qword_140C65920 + 8);
					if (v7)
					{
						while (v7[9] != v6)
						{
							v7 = (_QWORD*)v7[4];
							if (!v7)
								return sub_1400EA3E0(
									*(_QWORD*)(qword_140C65898 + 29504),
									"PlayerPathExplorerPowerMapStarted",
									byte_1409ED2CC,
									v4[6],
									a2[1]);
						}
						(*(void(__fastcall**)(_QWORD*))(*v7 + 8i64))(v7);
					}
				}
				return sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"PlayerPathExplorerPowerMapStarted",
					byte_1409ED2CC,
					v4[6],
					a2[1]);
			}
		}
	}
	return result;
}
// 1409ED2CC: using guessed type _BYTE byte_1409ED2CC[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65970: using guessed type __int64 qword_140C65970;

