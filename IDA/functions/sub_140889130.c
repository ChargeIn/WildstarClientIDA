#include "../winhttp.h"

//----- (0000000140889130) ----------------------------------------------------
__int64 __fastcall sub_140889130(char* lpThreadParameter)
{
	void* v1; // rdx
	void* v3; // rax
	void* v4; // rax
	DWORD v5; // eax
	bool v6; // bl
	HANDLE Handles[2]; // [rsp+30h] [rbp-38h] BYREF
	HANDLE v9[5]; // [rsp+40h] [rbp-28h] BYREF

	v1 = (void*)*((_QWORD*)lpThreadParameter + 8);
	v9[1] = *((HANDLE*)lpThreadParameter + 10);
	v3 = (void*)*((_QWORD*)lpThreadParameter + 11);
	v9[0] = v1;
	v9[2] = v3;
	v4 = (void*)*((_QWORD*)lpThreadParameter + 9);
	Handles[0] = v1;
	Handles[1] = v4;
	(*(void(__fastcall**)(char*))(*(_QWORD*)lpThreadParameter + 24i64))(lpThreadParameter);
	while (1)
	{
		while (WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 1))
		{
			v5 = WaitForMultipleObjectsEx(3u, v9, 0, 0xFFFFFFFF, 1);
			if (!v5)
				break;
			if (v5 <= 2)
				goto LABEL_7;
			if (v5 != 192)
			{
				if (v5 != 258)
					return 1i64;
			LABEL_7:
				EnterCriticalSection((LPCRITICAL_SECTION)(lpThreadParameter + 24));
				v6 = *((_DWORD*)lpThreadParameter + 27) < *((_DWORD*)lpThreadParameter + 2);
				LeaveCriticalSection((LPCRITICAL_SECTION)(lpThreadParameter + 24));
				if (v6)
					(*(void(__fastcall**)(char*))(*(_QWORD*)lpThreadParameter + 8i64))(lpThreadParameter);
			}
		}
		if ((*(unsigned __int8(__fastcall**)(char*))(*(_QWORD*)lpThreadParameter + 16i64))(lpThreadParameter))
			return 0i64;
		SleepEx(0x64u, 1);
	}
}

