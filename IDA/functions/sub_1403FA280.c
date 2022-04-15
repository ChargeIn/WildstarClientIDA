//----- (00000001403FA280) ----------------------------------------------------
void __fastcall sub_1403FA280(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]
	__int64 v8; // [rsp+30h] [rbp-18h]
	__int64 v9; // [rsp+38h] [rbp-10h]
	__int64 v10; // [rsp+50h] [rbp+8h] BYREF

	v10 = a1;
	v1 = qword_140C65898;
	v2 = *(_QWORD*)(qword_140C65898 + 32736);
	if (*(_DWORD*)(v2 + 40) != 4)
	{
		v3 = *(_QWORD*)(v2 + 32);
		if (v3)
		{
			while (*(_DWORD*)(v3 + 40) == 4)
			{
				v3 = *(_QWORD*)(v3 + 32);
				if (!v3)
					goto LABEL_5;
			}
		}
		else
		{
		LABEL_5:
			sub_1404351E0(v2);
		}
	}
	v4 = *(_QWORD*)(v1 + 25744);
	if (!v4 || !*(_DWORD*)(v4 + 684))
	{
		v5 = qword_140C65A48;
		if (qword_140C65A48
			&& !*(_QWORD*)(qword_140C65A48 + 24)
			&& (int)sub_1404D6210(
				qword_140C65A48,
				(void(__fastcall***)(_QWORD))v1,
				*(void(__fastcall****)(_QWORD))(v1 + 31016)) >= 0)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v1 + 30088) + 160i64))(*(_QWORD*)(v1 + 30088), 0i64);
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v1 + 30088) + 168i64))(
				*(_QWORD*)(v1 + 30088),
				205i64,
				1i64);
			v7 = 0i64;
			v8 = 0i64;
			v9 = 0i64;
			LODWORD(v10) = 205;
			sub_14001A500(&v6, 0i64, (int*)&v10);
			(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(v1 + 30088) + 120i64))(*(_QWORD*)(v1 + 30088), &v6);
			sub_140048100(v1, v5, 1);
			sub_1404D6290(v5);
			sub_140400BE0((__int64*)(v1 + 72), *(_QWORD*)(qword_140C635F0 + 5792));
			if (v7)
				sub_14018B900(v7, 0);
		}
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A48: using guessed type __int64 qword_140C65A48;

