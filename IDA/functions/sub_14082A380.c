//----- (000000014082A380) ----------------------------------------------------
__int64 __fastcall sub_14082A380(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
	__int64 v3; // rbx
	__int64 result; // rax
	unsigned int v8; // esi
	__int64 v9; // rdi

	v3 = *(_QWORD*)(a1 + 40);
	if (!v3)
		return 1i64;
	while (1)
	{
		result = (**(__int64(__fastcall***)(__int64, _QWORD, _QWORD))v3)(v3, a2, a3);
		v8 = result;
		if ((_DWORD)result != 1)
			break;
		v3 = *(_QWORD*)(v3 + 8);
		if (!v3)
			return result;
	}
	if (a3)
	{
		v9 = *(_QWORD*)(a1 + 40);
		if (v3 != v9)
		{
			do
			{
				(**(void(__fastcall***)(__int64, _QWORD, _QWORD))v9)(v9, a2, 0i64);
				v9 = *(_QWORD*)(v9 + 8);
			} while (v3 != v9);
			return v8;
		}
	}
	return result;
}

