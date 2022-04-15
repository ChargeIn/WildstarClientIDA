//----- (0000000140899030) ----------------------------------------------------
void __fastcall sub_140899030(__int64 a1, __int64 a2, unsigned __int8 a3)
{
	_QWORD* v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	unsigned __int64 v10; // rdi
	_QWORD* v11; // [rsp+38h] [rbp+10h] BYREF
	__int64* v12; // [rsp+48h] [rbp+20h] BYREF

	++* (_DWORD*)(a2 + 280);
	sub_140890680(a2, &v11);
	v6 = v11;
	if (!v11)
	{
		if (*(_QWORD*)(a1 + 176))
		{
			v11 = *(_QWORD**)(a1 + 176);
			sub_140890820(a2, (__int64*)&v11);
			v6 = v11;
		}
		else if (!*(_QWORD*)(a2 + 264))
		{
			goto LABEL_13;
		}
	}
	(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(*(_QWORD*)v6[1] + 96i64))(v6[1], a2, a3);
	v7 = (_QWORD*)*v11;
	v11 = v7;
	v12 = v7;
	if (v7)
	{
		v8 = *(_QWORD*)(v7[1] + 112i64);
		if (sub_140890970(a2) < v8)
		{
		LABEL_9:
			if (v12)
			{
				v10 = v8 - sub_140890970(a2);
				if (*(_BYTE*)(a2 + 296) || *(_QWORD*)(a2 + 288) > v10)
					sub_1408908C0(a2, v10, 0);
			}
		}
		else
		{
			while (1)
			{
				sub_140890820(a2, (__int64*)&v12);
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v12[1] + 96i64))(v12[1], a2, a3);
				v9 = *v12;
				v12 = (__int64*)v9;
				if (!v9)
					break;
				v8 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 112i64);
				if (sub_140890970(a2) < v8)
					goto LABEL_9;
			}
		}
	}
LABEL_13:
	--* (_DWORD*)(a2 + 280);
}

