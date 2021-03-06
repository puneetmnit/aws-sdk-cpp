﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/CreateBackupResult.h>
#include <aws/fsx/model/CreateFileSystemResult.h>
#include <aws/fsx/model/CreateFileSystemFromBackupResult.h>
#include <aws/fsx/model/DeleteBackupResult.h>
#include <aws/fsx/model/DeleteFileSystemResult.h>
#include <aws/fsx/model/DescribeBackupsResult.h>
#include <aws/fsx/model/DescribeFileSystemsResult.h>
#include <aws/fsx/model/ListTagsForResourceResult.h>
#include <aws/fsx/model/TagResourceResult.h>
#include <aws/fsx/model/UntagResourceResult.h>
#include <aws/fsx/model/UpdateFileSystemResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace FSx
{

namespace Model
{
        class CreateBackupRequest;
        class CreateFileSystemRequest;
        class CreateFileSystemFromBackupRequest;
        class DeleteBackupRequest;
        class DeleteFileSystemRequest;
        class DescribeBackupsRequest;
        class DescribeFileSystemsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateFileSystemRequest;

        typedef Aws::Utils::Outcome<CreateBackupResult, Aws::Client::AWSError<FSxErrors>> CreateBackupOutcome;
        typedef Aws::Utils::Outcome<CreateFileSystemResult, Aws::Client::AWSError<FSxErrors>> CreateFileSystemOutcome;
        typedef Aws::Utils::Outcome<CreateFileSystemFromBackupResult, Aws::Client::AWSError<FSxErrors>> CreateFileSystemFromBackupOutcome;
        typedef Aws::Utils::Outcome<DeleteBackupResult, Aws::Client::AWSError<FSxErrors>> DeleteBackupOutcome;
        typedef Aws::Utils::Outcome<DeleteFileSystemResult, Aws::Client::AWSError<FSxErrors>> DeleteFileSystemOutcome;
        typedef Aws::Utils::Outcome<DescribeBackupsResult, Aws::Client::AWSError<FSxErrors>> DescribeBackupsOutcome;
        typedef Aws::Utils::Outcome<DescribeFileSystemsResult, Aws::Client::AWSError<FSxErrors>> DescribeFileSystemsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<FSxErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<FSxErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<FSxErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateFileSystemResult, Aws::Client::AWSError<FSxErrors>> UpdateFileSystemOutcome;

        typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
        typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
        typedef std::future<CreateFileSystemFromBackupOutcome> CreateFileSystemFromBackupOutcomeCallable;
        typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
        typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
        typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
        typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateFileSystemOutcome> UpdateFileSystemOutcomeCallable;
} // namespace Model

  class FSxClient;

    typedef std::function<void(const FSxClient*, const Model::CreateBackupRequest&, const Model::CreateBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateFileSystemRequest&, const Model::CreateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFileSystemResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateFileSystemFromBackupRequest&, const Model::CreateFileSystemFromBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFileSystemFromBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteBackupRequest&, const Model::DeleteBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteFileSystemRequest&, const Model::DeleteFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFileSystemResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeBackupsRequest&, const Model::DescribeBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupsResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeFileSystemsRequest&, const Model::DescribeFileSystemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileSystemsResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UpdateFileSystemRequest&, const Model::UpdateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFileSystemResponseReceivedHandler;

  /**
   * <p>Amazon FSx is a fully managed service that makes it easy for storage and
   * application administrators to launch and use shared file storage.</p>
   */
  class AWS_FSX_API FSxClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FSxClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FSxClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FSxClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~FSxClient();

        inline virtual const char* GetServiceClientName() const override { return "FSx"; }


        /**
         * <p>Creates a backup of an existing Amazon FSx for Windows File Server file
         * system. Creating regular backups for your file system is a best practice that
         * complements the replication that Amazon FSx for Windows File Server performs for
         * your file system. It also enables you to restore from user modification of
         * data.</p> <p>If a backup with the specified client request token exists, and the
         * parameters match, this operation returns the description of the existing backup.
         * If a backup specified client request token exists, and the parameters don't
         * match, this operation returns <code>IncompatibleParameterError</code>. If a
         * backup with the specified client request token doesn't exist,
         * <code>CreateBackup</code> does the following: </p> <ul> <li> <p>Creates a new
         * Amazon FSx backup with an assigned ID, and an initial lifecycle state of
         * <code>CREATING</code>.</p> </li> <li> <p>Returns the description of the
         * backup.</p> </li> </ul> <p>By using the idempotent operation, you can retry a
         * <code>CreateBackup</code> operation without the risk of creating an extra
         * backup. This approach can be useful when an initial call fails in a way that
         * makes it unclear whether a backup was created. If you use the same client
         * request token and the initial call created a backup, the operation returns a
         * successful result because all the parameters are the same.</p> <p>The
         * <code>CreateFileSystem</code> operation returns while the backup's lifecycle
         * state is still <code>CREATING</code>. You can check the file system creation
         * status by calling the <a>DescribeBackups</a> operation, which returns the backup
         * state along with other information.</p> <note> <p/> </note><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest& request) const;

        /**
         * <p>Creates a backup of an existing Amazon FSx for Windows File Server file
         * system. Creating regular backups for your file system is a best practice that
         * complements the replication that Amazon FSx for Windows File Server performs for
         * your file system. It also enables you to restore from user modification of
         * data.</p> <p>If a backup with the specified client request token exists, and the
         * parameters match, this operation returns the description of the existing backup.
         * If a backup specified client request token exists, and the parameters don't
         * match, this operation returns <code>IncompatibleParameterError</code>. If a
         * backup with the specified client request token doesn't exist,
         * <code>CreateBackup</code> does the following: </p> <ul> <li> <p>Creates a new
         * Amazon FSx backup with an assigned ID, and an initial lifecycle state of
         * <code>CREATING</code>.</p> </li> <li> <p>Returns the description of the
         * backup.</p> </li> </ul> <p>By using the idempotent operation, you can retry a
         * <code>CreateBackup</code> operation without the risk of creating an extra
         * backup. This approach can be useful when an initial call fails in a way that
         * makes it unclear whether a backup was created. If you use the same client
         * request token and the initial call created a backup, the operation returns a
         * successful result because all the parameters are the same.</p> <p>The
         * <code>CreateFileSystem</code> operation returns while the backup's lifecycle
         * state is still <code>CREATING</code>. You can check the file system creation
         * status by calling the <a>DescribeBackups</a> operation, which returns the backup
         * state along with other information.</p> <note> <p/> </note><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request) const;

        /**
         * <p>Creates a backup of an existing Amazon FSx for Windows File Server file
         * system. Creating regular backups for your file system is a best practice that
         * complements the replication that Amazon FSx for Windows File Server performs for
         * your file system. It also enables you to restore from user modification of
         * data.</p> <p>If a backup with the specified client request token exists, and the
         * parameters match, this operation returns the description of the existing backup.
         * If a backup specified client request token exists, and the parameters don't
         * match, this operation returns <code>IncompatibleParameterError</code>. If a
         * backup with the specified client request token doesn't exist,
         * <code>CreateBackup</code> does the following: </p> <ul> <li> <p>Creates a new
         * Amazon FSx backup with an assigned ID, and an initial lifecycle state of
         * <code>CREATING</code>.</p> </li> <li> <p>Returns the description of the
         * backup.</p> </li> </ul> <p>By using the idempotent operation, you can retry a
         * <code>CreateBackup</code> operation without the risk of creating an extra
         * backup. This approach can be useful when an initial call fails in a way that
         * makes it unclear whether a backup was created. If you use the same client
         * request token and the initial call created a backup, the operation returns a
         * successful result because all the parameters are the same.</p> <p>The
         * <code>CreateFileSystem</code> operation returns while the backup's lifecycle
         * state is still <code>CREATING</code>. You can check the file system creation
         * status by calling the <a>DescribeBackups</a> operation, which returns the backup
         * state along with other information.</p> <note> <p/> </note><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new, empty Amazon FSx file system.</p> <p>If a file system with the
         * specified client request token exists and the parameters match,
         * <code>CreateFileSystem</code> returns the description of the existing file
         * system. If a file system specified client request token exists and the
         * parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, <code>CreateFileSystem</code> does the
         * following: </p> <ul> <li> <p>Creates a new, empty Amazon FSx file system with an
         * assigned ID, and an initial lifecycle state of <code>CREATING</code>.</p> </li>
         * <li> <p>Returns the description of the file system.</p> </li> </ul> <p>This
         * operation requires a client request token in the request that Amazon FSx uses to
         * ensure idempotent creation. This means that calling the operation multiple times
         * with the same client request token has no effect. By using the idempotent
         * operation, you can retry a <code>CreateFileSystem</code> operation without the
         * risk of creating an extra file system. This approach can be useful when an
         * initial call fails in a way that makes it unclear whether a file system was
         * created. Examples are if a transport level timeout occurred, or your connection
         * was reset. If you use the same client request token and the initial call created
         * a file system, the client receives success as long as the parameters are the
         * same.</p> <note> <p>The <code>CreateFileSystem</code> call returns while the
         * file system's lifecycle state is still <code>CREATING</code>. You can check the
         * file-system creation status by calling the <a>DescribeFileSystems</a> operation,
         * which returns the file system state along with other information.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileSystemOutcome CreateFileSystem(const Model::CreateFileSystemRequest& request) const;

        /**
         * <p>Creates a new, empty Amazon FSx file system.</p> <p>If a file system with the
         * specified client request token exists and the parameters match,
         * <code>CreateFileSystem</code> returns the description of the existing file
         * system. If a file system specified client request token exists and the
         * parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, <code>CreateFileSystem</code> does the
         * following: </p> <ul> <li> <p>Creates a new, empty Amazon FSx file system with an
         * assigned ID, and an initial lifecycle state of <code>CREATING</code>.</p> </li>
         * <li> <p>Returns the description of the file system.</p> </li> </ul> <p>This
         * operation requires a client request token in the request that Amazon FSx uses to
         * ensure idempotent creation. This means that calling the operation multiple times
         * with the same client request token has no effect. By using the idempotent
         * operation, you can retry a <code>CreateFileSystem</code> operation without the
         * risk of creating an extra file system. This approach can be useful when an
         * initial call fails in a way that makes it unclear whether a file system was
         * created. Examples are if a transport level timeout occurred, or your connection
         * was reset. If you use the same client request token and the initial call created
         * a file system, the client receives success as long as the parameters are the
         * same.</p> <note> <p>The <code>CreateFileSystem</code> call returns while the
         * file system's lifecycle state is still <code>CREATING</code>. You can check the
         * file-system creation status by calling the <a>DescribeFileSystems</a> operation,
         * which returns the file system state along with other information.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFileSystemOutcomeCallable CreateFileSystemCallable(const Model::CreateFileSystemRequest& request) const;

        /**
         * <p>Creates a new, empty Amazon FSx file system.</p> <p>If a file system with the
         * specified client request token exists and the parameters match,
         * <code>CreateFileSystem</code> returns the description of the existing file
         * system. If a file system specified client request token exists and the
         * parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, <code>CreateFileSystem</code> does the
         * following: </p> <ul> <li> <p>Creates a new, empty Amazon FSx file system with an
         * assigned ID, and an initial lifecycle state of <code>CREATING</code>.</p> </li>
         * <li> <p>Returns the description of the file system.</p> </li> </ul> <p>This
         * operation requires a client request token in the request that Amazon FSx uses to
         * ensure idempotent creation. This means that calling the operation multiple times
         * with the same client request token has no effect. By using the idempotent
         * operation, you can retry a <code>CreateFileSystem</code> operation without the
         * risk of creating an extra file system. This approach can be useful when an
         * initial call fails in a way that makes it unclear whether a file system was
         * created. Examples are if a transport level timeout occurred, or your connection
         * was reset. If you use the same client request token and the initial call created
         * a file system, the client receives success as long as the parameters are the
         * same.</p> <note> <p>The <code>CreateFileSystem</code> call returns while the
         * file system's lifecycle state is still <code>CREATING</code>. You can check the
         * file-system creation status by calling the <a>DescribeFileSystems</a> operation,
         * which returns the file system state along with other information.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFileSystemAsync(const Model::CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon FSx file system from an existing Amazon FSx for Windows
         * File Server backup.</p> <p>If a file system with the specified client request
         * token exists and the parameters match, this call returns the description of the
         * existing file system. If a client request token specified by the file system
         * exists and the parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, this operation does the following:</p> <ul>
         * <li> <p>Creates a new Amazon FSx file system from backup with an assigned ID,
         * and an initial lifecycle state of <code>CREATING</code>.</p> </li> <li>
         * <p>Returns the description of the file system.</p> </li> </ul> <p>Parameters
         * like Active Directory, default share name, automatic backup, and backup settings
         * default to the parameters of the file system that was backed up, unless
         * overridden. You can explicitly supply other settings.</p> <p>By using the
         * idempotent operation, you can retry a <code>CreateFileSystemFromBackup</code>
         * call without the risk of creating an extra file system. This approach can be
         * useful when an initial call fails in a way that makes it unclear whether a file
         * system was created. Examples are if a transport level timeout occurred, or your
         * connection was reset. If you use the same client request token and the initial
         * call created a file system, the client receives success as long as the
         * parameters are the same.</p> <note> <p>The
         * <code>CreateFileSystemFromBackup</code> call returns while the file system's
         * lifecycle state is still <code>CREATING</code>. You can check the file-system
         * creation status by calling the <a>DescribeFileSystems</a> operation, which
         * returns the file system state along with other information.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileSystemFromBackupOutcome CreateFileSystemFromBackup(const Model::CreateFileSystemFromBackupRequest& request) const;

        /**
         * <p>Creates a new Amazon FSx file system from an existing Amazon FSx for Windows
         * File Server backup.</p> <p>If a file system with the specified client request
         * token exists and the parameters match, this call returns the description of the
         * existing file system. If a client request token specified by the file system
         * exists and the parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, this operation does the following:</p> <ul>
         * <li> <p>Creates a new Amazon FSx file system from backup with an assigned ID,
         * and an initial lifecycle state of <code>CREATING</code>.</p> </li> <li>
         * <p>Returns the description of the file system.</p> </li> </ul> <p>Parameters
         * like Active Directory, default share name, automatic backup, and backup settings
         * default to the parameters of the file system that was backed up, unless
         * overridden. You can explicitly supply other settings.</p> <p>By using the
         * idempotent operation, you can retry a <code>CreateFileSystemFromBackup</code>
         * call without the risk of creating an extra file system. This approach can be
         * useful when an initial call fails in a way that makes it unclear whether a file
         * system was created. Examples are if a transport level timeout occurred, or your
         * connection was reset. If you use the same client request token and the initial
         * call created a file system, the client receives success as long as the
         * parameters are the same.</p> <note> <p>The
         * <code>CreateFileSystemFromBackup</code> call returns while the file system's
         * lifecycle state is still <code>CREATING</code>. You can check the file-system
         * creation status by calling the <a>DescribeFileSystems</a> operation, which
         * returns the file system state along with other information.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFileSystemFromBackupOutcomeCallable CreateFileSystemFromBackupCallable(const Model::CreateFileSystemFromBackupRequest& request) const;

        /**
         * <p>Creates a new Amazon FSx file system from an existing Amazon FSx for Windows
         * File Server backup.</p> <p>If a file system with the specified client request
         * token exists and the parameters match, this call returns the description of the
         * existing file system. If a client request token specified by the file system
         * exists and the parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, this operation does the following:</p> <ul>
         * <li> <p>Creates a new Amazon FSx file system from backup with an assigned ID,
         * and an initial lifecycle state of <code>CREATING</code>.</p> </li> <li>
         * <p>Returns the description of the file system.</p> </li> </ul> <p>Parameters
         * like Active Directory, default share name, automatic backup, and backup settings
         * default to the parameters of the file system that was backed up, unless
         * overridden. You can explicitly supply other settings.</p> <p>By using the
         * idempotent operation, you can retry a <code>CreateFileSystemFromBackup</code>
         * call without the risk of creating an extra file system. This approach can be
         * useful when an initial call fails in a way that makes it unclear whether a file
         * system was created. Examples are if a transport level timeout occurred, or your
         * connection was reset. If you use the same client request token and the initial
         * call created a file system, the client receives success as long as the
         * parameters are the same.</p> <note> <p>The
         * <code>CreateFileSystemFromBackup</code> call returns while the file system's
         * lifecycle state is still <code>CREATING</code>. You can check the file-system
         * creation status by calling the <a>DescribeFileSystems</a> operation, which
         * returns the file system state along with other information.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFileSystemFromBackupAsync(const Model::CreateFileSystemFromBackupRequest& request, const CreateFileSystemFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon FSx for Windows File Server backup, deleting its contents.
         * After deletion, the backup no longer exists, and its data is gone.</p> <p>The
         * <code>DeleteBackup</code> call returns instantly. The backup will not show up in
         * later <code>DescribeBackups</code> calls.</p> <important> <p>The data in a
         * deleted backup is also deleted and can't be recovered by any means.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest& request) const;

        /**
         * <p>Deletes an Amazon FSx for Windows File Server backup, deleting its contents.
         * After deletion, the backup no longer exists, and its data is gone.</p> <p>The
         * <code>DeleteBackup</code> call returns instantly. The backup will not show up in
         * later <code>DescribeBackups</code> calls.</p> <important> <p>The data in a
         * deleted backup is also deleted and can't be recovered by any means.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupOutcomeCallable DeleteBackupCallable(const Model::DeleteBackupRequest& request) const;

        /**
         * <p>Deletes an Amazon FSx for Windows File Server backup, deleting its contents.
         * After deletion, the backup no longer exists, and its data is gone.</p> <p>The
         * <code>DeleteBackup</code> call returns instantly. The backup will not show up in
         * later <code>DescribeBackups</code> calls.</p> <important> <p>The data in a
         * deleted backup is also deleted and can't be recovered by any means.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a file system, deleting its contents. After deletion, the file system
         * no longer exists, and its data is gone. Any existing automatic backups will also
         * be deleted.</p> <p>By default, when you delete an Amazon FSx for Windows File
         * Server file system, a final backup is created upon deletion. This final backup
         * is not subject to the file system's retention policy, and must be manually
         * deleted.</p> <p>The <code>DeleteFileSystem</code> action returns while the file
         * system has the <code>DELETING</code> status. You can check the file system
         * deletion status by calling the <a>DescribeFileSystems</a> action, which returns
         * a list of file systems in your account. If you pass the file system ID for a
         * deleted file system, the <a>DescribeFileSystems</a> returns a
         * <code>FileSystemNotFound</code> error.</p> <important> <p>The data in a deleted
         * file system is also deleted and can't be recovered by any means.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileSystemOutcome DeleteFileSystem(const Model::DeleteFileSystemRequest& request) const;

        /**
         * <p>Deletes a file system, deleting its contents. After deletion, the file system
         * no longer exists, and its data is gone. Any existing automatic backups will also
         * be deleted.</p> <p>By default, when you delete an Amazon FSx for Windows File
         * Server file system, a final backup is created upon deletion. This final backup
         * is not subject to the file system's retention policy, and must be manually
         * deleted.</p> <p>The <code>DeleteFileSystem</code> action returns while the file
         * system has the <code>DELETING</code> status. You can check the file system
         * deletion status by calling the <a>DescribeFileSystems</a> action, which returns
         * a list of file systems in your account. If you pass the file system ID for a
         * deleted file system, the <a>DescribeFileSystems</a> returns a
         * <code>FileSystemNotFound</code> error.</p> <important> <p>The data in a deleted
         * file system is also deleted and can't be recovered by any means.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFileSystemOutcomeCallable DeleteFileSystemCallable(const Model::DeleteFileSystemRequest& request) const;

        /**
         * <p>Deletes a file system, deleting its contents. After deletion, the file system
         * no longer exists, and its data is gone. Any existing automatic backups will also
         * be deleted.</p> <p>By default, when you delete an Amazon FSx for Windows File
         * Server file system, a final backup is created upon deletion. This final backup
         * is not subject to the file system's retention policy, and must be manually
         * deleted.</p> <p>The <code>DeleteFileSystem</code> action returns while the file
         * system has the <code>DELETING</code> status. You can check the file system
         * deletion status by calling the <a>DescribeFileSystems</a> action, which returns
         * a list of file systems in your account. If you pass the file system ID for a
         * deleted file system, the <a>DescribeFileSystems</a> returns a
         * <code>FileSystemNotFound</code> error.</p> <important> <p>The data in a deleted
         * file system is also deleted and can't be recovered by any means.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFileSystemAsync(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of specific Amazon FSx for Windows File Server
         * backups, if a <code>BackupIds</code> value is provided for that backup.
         * Otherwise, it returns all backups owned by your AWS account in the AWS Region of
         * the endpoint that you're calling.</p> <p>When retrieving all backups, you can
         * optionally specify the <code>MaxResults</code> parameter to limit the number of
         * backups in a response. If more backups remain, Amazon FSx returns a
         * <code>NextToken</code> value in the response. In this case, send a later request
         * with the <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your backups.
         * <code>DescribeBackups</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of backups returned in the response of one
         * <code>DescribeBackups</code> call and the order of backups returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx for Windows File Server
         * backups, if a <code>BackupIds</code> value is provided for that backup.
         * Otherwise, it returns all backups owned by your AWS account in the AWS Region of
         * the endpoint that you're calling.</p> <p>When retrieving all backups, you can
         * optionally specify the <code>MaxResults</code> parameter to limit the number of
         * backups in a response. If more backups remain, Amazon FSx returns a
         * <code>NextToken</code> value in the response. In this case, send a later request
         * with the <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your backups.
         * <code>DescribeBackups</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of backups returned in the response of one
         * <code>DescribeBackups</code> call and the order of backups returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx for Windows File Server
         * backups, if a <code>BackupIds</code> value is provided for that backup.
         * Otherwise, it returns all backups owned by your AWS account in the AWS Region of
         * the endpoint that you're calling.</p> <p>When retrieving all backups, you can
         * optionally specify the <code>MaxResults</code> parameter to limit the number of
         * backups in a response. If more backups remain, Amazon FSx returns a
         * <code>NextToken</code> value in the response. In this case, send a later request
         * with the <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your backups.
         * <code>DescribeBackups</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of backups returned in the response of one
         * <code>DescribeBackups</code> call and the order of backups returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of specific Amazon FSx file systems, if a
         * <code>FileSystemIds</code> value is provided for that file system. Otherwise, it
         * returns descriptions of all file systems owned by your AWS account in the AWS
         * Region of the endpoint that you're calling.</p> <p>When retrieving all file
         * system descriptions, you can optionally specify the <code>MaxResults</code>
         * parameter to limit the number of descriptions in a response. If more file system
         * descriptions remain, Amazon FSx returns a <code>NextToken</code> value in the
         * response. In this case, send a later request with the <code>NextToken</code>
         * request parameter set to the value of <code>NextToken</code> from the last
         * response.</p> <p>This action is used in an iterative process to retrieve a list
         * of your file system descriptions. <code>DescribeFileSystems</code> is called
         * first without a <code>NextToken</code>value. Then the action continues to be
         * called with the <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of file systems returned in the response of one
         * <code>DescribeFileSystems</code> call and the order of file systems returned
         * across the responses of a multicall iteration is unspecified.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileSystemsOutcome DescribeFileSystems(const Model::DescribeFileSystemsRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx file systems, if a
         * <code>FileSystemIds</code> value is provided for that file system. Otherwise, it
         * returns descriptions of all file systems owned by your AWS account in the AWS
         * Region of the endpoint that you're calling.</p> <p>When retrieving all file
         * system descriptions, you can optionally specify the <code>MaxResults</code>
         * parameter to limit the number of descriptions in a response. If more file system
         * descriptions remain, Amazon FSx returns a <code>NextToken</code> value in the
         * response. In this case, send a later request with the <code>NextToken</code>
         * request parameter set to the value of <code>NextToken</code> from the last
         * response.</p> <p>This action is used in an iterative process to retrieve a list
         * of your file system descriptions. <code>DescribeFileSystems</code> is called
         * first without a <code>NextToken</code>value. Then the action continues to be
         * called with the <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of file systems returned in the response of one
         * <code>DescribeFileSystems</code> call and the order of file systems returned
         * across the responses of a multicall iteration is unspecified.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFileSystemsOutcomeCallable DescribeFileSystemsCallable(const Model::DescribeFileSystemsRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx file systems, if a
         * <code>FileSystemIds</code> value is provided for that file system. Otherwise, it
         * returns descriptions of all file systems owned by your AWS account in the AWS
         * Region of the endpoint that you're calling.</p> <p>When retrieving all file
         * system descriptions, you can optionally specify the <code>MaxResults</code>
         * parameter to limit the number of descriptions in a response. If more file system
         * descriptions remain, Amazon FSx returns a <code>NextToken</code> value in the
         * response. In this case, send a later request with the <code>NextToken</code>
         * request parameter set to the value of <code>NextToken</code> from the last
         * response.</p> <p>This action is used in an iterative process to retrieve a list
         * of your file system descriptions. <code>DescribeFileSystems</code> is called
         * first without a <code>NextToken</code>value. Then the action continues to be
         * called with the <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of file systems returned in the response of one
         * <code>DescribeFileSystems</code> call and the order of file systems returned
         * across the responses of a multicall iteration is unspecified.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFileSystemsAsync(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags for an Amazon FSx file systems and backups in the case of Amazon
         * FSx for Windows File Server.</p> <p>When retrieving all tags, you can optionally
         * specify the <code>MaxResults</code> parameter to limit the number of tags in a
         * response. If more tags remain, Amazon FSx returns a <code>NextToken</code> value
         * in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your tags.
         * <code>ListTagsForResource</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of tags returned in the response of one
         * <code>ListTagsForResource</code> call and the order of tags returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for an Amazon FSx file systems and backups in the case of Amazon
         * FSx for Windows File Server.</p> <p>When retrieving all tags, you can optionally
         * specify the <code>MaxResults</code> parameter to limit the number of tags in a
         * response. If more tags remain, Amazon FSx returns a <code>NextToken</code> value
         * in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your tags.
         * <code>ListTagsForResource</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of tags returned in the response of one
         * <code>ListTagsForResource</code> call and the order of tags returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for an Amazon FSx file systems and backups in the case of Amazon
         * FSx for Windows File Server.</p> <p>When retrieving all tags, you can optionally
         * specify the <code>MaxResults</code> parameter to limit the number of tags in a
         * response. If more tags remain, Amazon FSx returns a <code>NextToken</code> value
         * in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your tags.
         * <code>ListTagsForResource</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of tags returned in the response of one
         * <code>ListTagsForResource</code> call and the order of tags returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags an Amazon FSx resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tags an Amazon FSx resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tags an Amazon FSx resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action removes a tag from an Amazon FSx resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>This action removes a tag from an Amazon FSx resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>This action removes a tag from an Amazon FSx resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a file system configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFileSystemOutcome UpdateFileSystem(const Model::UpdateFileSystemRequest& request) const;

        /**
         * <p>Updates a file system configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFileSystemOutcomeCallable UpdateFileSystemCallable(const Model::UpdateFileSystemRequest& request) const;

        /**
         * <p>Updates a file system configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFileSystemAsync(const Model::UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        /**Async helpers**/
        void CreateBackupAsyncHelper(const Model::CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFileSystemAsyncHelper(const Model::CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFileSystemFromBackupAsyncHelper(const Model::CreateFileSystemFromBackupRequest& request, const CreateFileSystemFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupAsyncHelper(const Model::DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFileSystemAsyncHelper(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBackupsAsyncHelper(const Model::DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFileSystemsAsyncHelper(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFileSystemAsyncHelper(const Model::UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace FSx
} // namespace Aws
