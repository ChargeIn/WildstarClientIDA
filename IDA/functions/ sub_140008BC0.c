//----- (0000000140008BC0) ----------------------------------------------------
__int64 sub_140008BC0()
{
	_QWORD* v0; // rdi
	int v1; // eax
	__int64 result; // rax
	_DWORD* v3; // rbx
	HWND v4; // rcx
	int v5; // eax
	int v6; // eax
	__int64 v7; // rax
	__int64 v8; // rcx
	struct tagMSG Msg; // [rsp+30h] [rbp-38h] BYREF

	v0 = (_QWORD*)qword_140C635F0;
	v1 = *(_DWORD*)(qword_140C635F0 + 64);
	if ((v1 & 1) == 0 || (v1 & 4) != 0)
		return 2147500037i64;
	result = sub_140251A40(qword_140C635F0);
	if ((int)result >= 0)
	{
		*((_DWORD*)v0 + 16) = v0[8] & 0xFFFFEE3B | 0x44;
		sub_1401A4610();
		if ((v0[8] & 0x1000) == 0)
		{
			do
			{
				if (qword_140C886B8)
					++* (_DWORD*)qword_140C886B8;
				v3 = (_DWORD*)qword_140C636A0;
				--* (_DWORD*)qword_140C636A0;
				if (PeekMessageW(&Msg, 0i64, 0, 0, 1u))
				{
					while (Msg.message != 18)
					{
						v4 = (HWND)v0[1];
						if (v4 && !TranslateAcceleratorW(v4, (HACCEL)v0[3], &Msg))
						{
							TranslateMessage(&Msg);
							DispatchMessageW(&Msg);
						}
						if (!PeekMessageW(&Msg, 0i64, 0, 0, 1u))
							goto LABEL_15;
					}
					*((_DWORD*)v0 + 16) |= 0x1000u;
				}
			LABEL_15:
				++* v3;
				v5 = *((_DWORD*)v0 + 16);
				if ((v5 & 0x1000) != 0)
					break;
				v6 = v0[1] && (v5 & 0x40) != 0
					? (*(__int64(__fastcall**)(_QWORD*))(*v0 + 56i64))(v0)
					: sub_1400094F0((__int64)v0);
			} while (v6 >= 0 && (v0[8] & 0x1000) == 0);
		}
		if (qword_140C886B8)
		{
			sub_1401A46B0(qword_140C886B8);
			qword_140C886B8 = 0i64;
		}
		v7 = *v0;
		*((_DWORD*)v0 + 16) &= ~4u;
		result = (*(__int64(__fastcall**)(_QWORD*))(v7 + 16))(v0);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(_QWORD*))(*v0 + 48i64))(v0);
			if ((int)result >= 0)
			{
				v8 = v0[15];
				if (v8)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
					v0[15] = 0i64;
				}
				if (qword_140C65670)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 8i64))(qword_140C65670);
					qword_140C65670 = 0i64;
				}
				return 0i64;
			}
		}
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A0: using guessed type __int64 qword_140C636A0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C886B8: using guessed type __int64 qword_140C886B8;

