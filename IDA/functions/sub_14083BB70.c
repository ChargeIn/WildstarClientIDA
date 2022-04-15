//----- (000000014083BB70) ----------------------------------------------------
void** __fastcall sub_14083BB70(__int64 a1, __int64 a2)
{
	void** result; // rax
	__int64* v3; // rdi
	unsigned int v6; // esi
	__int64* v7; // r14
	__int64 v8; // rbx
	unsigned int v9; // r8d
	__int64 v10; // rax
	void(__fastcall * v11)(__int64, __int64*); // rbx
	__int64 v12; // rcx
	int v13; // eax
	void* v14; // rcx
	__int64 v15[2]; // [rsp+20h] [rbp-58h] BYREF
	unsigned int v16; // [rsp+30h] [rbp-48h]
	int v17; // [rsp+34h] [rbp-44h]
	int v18; // [rsp+38h] [rbp-40h]
	int v19; // [rsp+3Ch] [rbp-3Ch]
	__int64 v20; // [rsp+40h] [rbp-38h]
	void* retaddr; // [rsp+78h] [rbp+0h] BYREF

	result = &retaddr;
	v3 = *(__int64**)(a2 + 32);
	if (v3)
	{
		v6 = 0;
		if (*(_WORD*)(a2 + 24))
		{
			v7 = v3 + 3;
			do
			{
				v8 = *v3;
				EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
				v9 = *(_DWORD*)(v8 + 120);
				v10 = *(_QWORD*)(a1 + 8i64 * (v9 % 0x1F));
				if (v10)
				{
					while (*(_DWORD*)(v10 + 48) != v9)
					{
						v10 = *(_QWORD*)(v10 + 80);
						if (!v10)
							goto LABEL_7;
					}
				}
				else
				{
				LABEL_7:
					v10 = 0i64;
				}
				if ((*(_BYTE*)(v10 + 72) & 4) != 0 && (v11 = *(void(__fastcall**)(__int64, __int64*))(v10 + 56)) != 0i64)
				{
					v12 = *(_QWORD*)(v10 + 64);
					v16 = v9;
					v15[0] = v12;
					v15[1] = *(_QWORD*)(v10 + 16);
					LODWORD(v12) = *(_DWORD*)(v10 + 8);
					v18 = *((_DWORD*)v7 - 2);
					v13 = *((_DWORD*)v7 - 1);
					v17 = v12;
					v14 = *(void**)(a1 + 296);
					v19 = v13;
					v20 = *v7;
					ResetEvent(v14);
					LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
					v11(4i64, v15);
					SetEvent(*(HANDLE*)(a1 + 296));
				}
				else
				{
					LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
				}
				++v6;
				v3 += 4;
				v7 += 4;
			} while (v6 < *(unsigned __int16*)(a2 + 24));
		}
		return (void**)sub_1408683D0(a2);
	}
	return result;
}

