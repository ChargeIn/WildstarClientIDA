//----- (00000001404EA830) ----------------------------------------------------
__int64 __fastcall sub_1404EA830(__int64 a1)
{
	__int64 result; // rax
	struct _FILETIME v3; // rsi
	struct _FILETIME v4; // rbx
	__int64 v5; // rax
	__int64 v6; // r8
	struct _FILETIME** v7; // rdx
	struct _FILETIME* v8; // rax
	__int64 v9; // rax
	_WORD* v10; // rax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	if (!a1)
		return 0i64;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v3 = SystemTimeAsFileTime;
	v4 = SystemTimeAsFileTime;
	switch (*(_DWORD*)(a1 + 48))
	{
	case 0:
		v9 = sub_14044F8C0(qword_140C65908, *(_DWORD*)(a1 + 56));
		goto LABEL_13;
	case 1:
		v10 = *(_WORD**)(a1 + 56);
		if (v10 && *v10)
			goto LABEL_18;
		goto LABEL_14;
	case 2:
		v9 = sub_14044F870(qword_140C65908, *(_DWORD*)(a1 + 56));
	LABEL_13:
		if (!v9)
			goto LABEL_14;
		goto LABEL_18;
	case 3:
	case 6:
		goto LABEL_18;
	case 4:
		v5 = sub_14044F8C0(qword_140C65908, *(_DWORD*)(a1 + 56));
		if (!v5)
			goto LABEL_14;
		v6 = *(_QWORD*)(v5 + 72);
		if (v6)
		{
			v7 = *(struct _FILETIME***)(v5 + 64);
			do
			{
				v8 = *v7++;
				if (*(unsigned __int64*)&v4 > *(_QWORD*)&v8[7])
					v4 = v8[7];
				--v6;
			} while (v6);
		}
		if (*(_QWORD*)&v4 < *(unsigned __int64*)&v3)
			LABEL_18:
		result = 1i64;
		else
			result = 0i64;
		break;
	default:
	LABEL_14:
		result = 0i64;
		break;
	}
	return result;
}
// 140C65908: using guessed type __int64 qword_140C65908;

