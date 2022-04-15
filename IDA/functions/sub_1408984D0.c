//----- (00000001408984D0) ----------------------------------------------------
__int64 __fastcall sub_1408984D0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	unsigned int v5; // edi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // r8
	__int64 v9; // rcx
	bool v10; // [rsp+58h] [rbp+20h] BYREF

	result = sub_14088C3E0(a1, a2, a3);
	if ((_DWORD)result == 1)
	{
		result = sub_140896ED0((__int64)(a1 + 20));
		v5 = result;
		if ((_DWORD)result == 1)
		{
			v6 = sub_140898620((__int64)a1, &v10);
			if (v6 && (v7 = *(_QWORD*)(v6 + 24)) != 0)
			{
				if (v10)
					v8 = (unsigned int)-sub_140892310(*(_QWORD*)(v7 + 128));
				else
					v8 = 0i64;
				v9 = (*(int(__fastcall**)(_QWORD*, _QWORD, __int64, _QWORD, bool*, _DWORD))(*a1 + 88i64))(
					a1,
					0i64,
					v8,
					0i64,
					&v10,
					0);
				result = v5;
				a1[14] = v9;
			}
			else
			{
				return 2i64;
			}
		}
	}
	return result;
}

