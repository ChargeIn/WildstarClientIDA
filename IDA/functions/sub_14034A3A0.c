//----- (000000014034A3A0) ----------------------------------------------------
__int64 sub_14034A3A0()
{
	__int64(__fastcall * *v0)(); // rbx
	__int64 result; // rax
	int v2; // [rsp+48h] [rbp+10h] BYREF

	v0 = off_140B653A0;
	while (1)
	{
		result = sub_140828450(
			*((_DWORD*)v0 - 4),
			*((_DWORD*)v0 - 3),
			*((_DWORD*)v0 - 2),
			(unsigned int)*v0,
			(__int64)v0[1]);
		if ((int)result < 0)
			break;
		v0 += 4;
		if ((__int64)v0 >= (__int64)"Trying to set a path longer then MAX_PATH")
		{
			result = sub_1408283F0(0i64, 4i64, sub_1408EA770, sub_1408E9CF0);
			if ((int)result >= 0)
			{
				if ((unsigned int)sub_1408279E0(L"Init.bnk", 0xFFFFFFFF, &v2) == 1)
					return 0i64;
				else
					return 2147500037i64;
			}
			return result;
		}
	}
	return result;
}
// 1408283F0: using guessed type __int64 __fastcall sub_1408283F0(_QWORD, _QWORD, _QWORD, _QWORD);
// 140828450: using guessed type __int64 __fastcall sub_140828450(_DWORD, _DWORD, _DWORD, _DWORD, __int64);
// 140AF45F0: using guessed type wchar_t aInitBnk[9];
// 140B653A0: using guessed type __int64 (__fastcall *off_140B653A0[2])();

